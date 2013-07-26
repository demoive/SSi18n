# Simple SSI i18n Site
Get an internationalized site up and running in 3 minutes! No server-side programming languages, Wordpress plugins, databases or nothin'! Plus, you'll get modularized views for your content that is easy to manage, and powerful routing abilities for customized configurations.

https://gist.github.com/demoive/5538457

### When to use
- You have a simple and/or small site
- You need to support multiple languages
- You want to keep your static files organized and modular (perhaps in different folders for access control)
- You want to have a flexible routing system so that URLs can be changed easily without having to modify existing links across your site
- You are familiar with [regular expressions](http://www.regular-expressions.info/) or don't mind learning!
- Your server is Apache (or soon... Nginx)†
- You weren't convinced of the [advantages and benefits that Jekyll has](ttp://jekyllbootstrap.com/lessons/jekyll-introduction.html#why_should_i_care)

### When not to use
- You've been convinced that [Jekyll](http://jekyllrb.com/) is probably a better option (because in my opinion, it's awesome)
- You need real server-side logic code
- You need high-scale, production-level performance

## Installation
- Place the `.htaccess` and `index.inc` file plus the `_includes/` folder in the webroot of your server
- Create an initial template file (defaults to `/_includes/200_html.inc`)
- Configure the other includes (var, var.i18n, routes)
- You're done!
- From this point on, it's up to you to customize the structure to fit your needs. The included site files is just an example as a seed-project for you to get started.

For further optimization, everything inside the `.htaccess` file could be configured within your server settings making this file unecessary altogether.

†This example is configured to be used with [Apache](http://httpd.apache.org/docs/current/howto/ssi.html) (which happens to be the [most common server](http://news.netcraft.com/archives/2013/04/02/april-2013-web-server-survey.html)), but not much effort would be needed to make it work with [Nginx](http://nginx.org/en/docs/http/ngx_http_ssi_module.html) which would be even more performant!


## How it works
The premesis is based on an ability to include separate files within another. This allows for templating (albeit very simple ones) whereby different, isolated partial views (called "partials") can be used to build up a full page. Another crutial need is the ability to define variables with values that can be referenced throughout any subsequent partial view.

The technology that allows for this is called SSI ([Server Side Includes](http://en.wikipedia.org/wiki/Server_Side_Includes)). SSI allows for procedural, dynamic configuration of a file before it's sent down the wire to the browser.

- The configuration in [`.htaccess`](http://en.wikipedia.org/wiki/Htaccess) ensures all traffic is routed to one file (`index.inc`)
- The `index.inc` loads an initial view file (`/includes/html.inc`)
- But before doing so, it defines several variables which can be used anywhere
- Probably the most important of these variables is information from the requested URL such as:
  - `$lang` [2-letter ISO language code](http://en.wikipedia.org/wiki/List_of_ISO_639-1_codes)
  - `$route` the full requested pathname
  - `$query` anything after the `?` in the URL (until the first `#` hash character)
  - `$hash` anything after the `#` character in the URL

If you're still with me, you can see the flexibility this provides for your views. Aside from defining your own variables inside the router file (such as site name, author, contact email, etc.), it is also recommended to define all the available routes (URLs) for your site as variables inside this file. This will give you a powerful toolkit of information to alter the behaviour of individual views. Be creative!


## Why the SSi18n solution?
With so many readily available solutions that do all that this does (and more), why SSi18n? In short, for the sake of simplicity and maintainability. I see too many people opting for a custom installation of Wordpress which they simply use as a CMS. Later, plugins are installed to alter its core behaviour and to manage localization ([qTranslate](http://wordpress.org/extend/plugins/qtranslate/) by [Qian Qin](http://www.qianqin.de/qtranslate/) is a great one, btw). But, if we can reach the same solution with less overhead and dependancies, shouldn't we? Here are some more reasons:

- No server-side programming or databases... period!
- Blazingly fast... I think?†
- Smaller toll on the server = environmentally friendly (depends on the previous one)‡
- An elegant solution to a common headache we (suprisingly) still have today
- Exemplifies that mainstream options aren't necessarily the best solution to a problem
- It's cool to use old (and stable) technologies to solve a complex problem
- It's the epitome of simplicity: the only requirement is a basic server with no installed modules/plugins/databases.

†Can't really get any faster, actually, since it's only relying on the core server.
‡Yes, this is up for debate. I welcome any research done with server performance (taking caching, static files, etc. into account)

### Project requirements
The following list of requirements I set for myself while creating this project and coincidentally serve as a feature list:

- Must support i18n through **directory-based** l10n (`http://domain.com/[lang]/full/path/name/`)
- Modularized html files so that views can be:
  - simplified as much as possible into small units
  - put into isolated directories (for editor access, for example)
- <del>Source content which can be written in Markdown (https://github.com/hakimel/reveal.js/#markdown)</del>
- Customizable error (404, 500, etc.) pages
- <del>Content that can be accessed from a remote path (such as Dropbox, etc.)</del>

<!--
https://github.com/chjj/marked
```html
<section data-markdown="example.md" data-separator="^\n\n\n" data-vertical="^\n\n"></section>
```

```html
<section data-markdown>
    <script type="text/template">
        <!--#include virtual="/includes/200_html.inc"
    </script>
</section>
```
-->

## How I found out about SSIs
I thought it would be remiss if I didn't mention how I came to discover SSI and their usefulness. Let's face it, SSI is the abandoned tool of Apache. A practically forgotten feature, overshadowed by it's more versatile and powerful server-side language counterparts. I went a long time withouth even knowing they existed until one of my first interviews after college.

I was asked why I used PHP for the websites I created to which I responded: "Mostly because you can include different files which makes it easier to maintain templates, etc." Obviously this was a naive response and very telling of my inexperience at the time. The interviewer responded: "Why not use server side includes if all you need to do is include separate files?"

To be honest, it wasn't the _only_ thing I was using PHP for, but two things came out of this dialog: (1) I didn't get the job, and (2) I was introduced to Server Side Includes! I guess perhaps this project is an homage to the naivety of my introduction to it :stuck_out_tongue_closed_eyes: