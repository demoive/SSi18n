Super Simple i18ned Site

## Names
- SSI Site: **S**uper **S**imple **i**18n Site
- SSI Site: **S**imple **S**SI **i**18n Site
- SSI Site: **S**imple **S**SI-driven **i**18n Site
- SSiS: **S**uper **S**imple **i**18ned **S**ite
- SSiSS: **S**uper **S**imple **i**18ned **S**ite
- SSIS: **SSI** **S**ite
- SSI Site: **S**uper **SI**mple Site
- SSI: **S**imple **SI**te
- SSI: **S**SI **SI**te
- SSISITE
- Kaa (snake from Jungle book)


## How I found out about SSIs


## Why this solution (requirements)
- Modularized html files so that can be
  - simplified as much as possible into small units
  - put into isolated directory where editor have access to
  - accessed from a remote path (such as Dropbox, etc.)
  - can be parsed from Markdown (https://github.com/hakimel/reveal.js/#markdown)
- Isn't it cool to use technology from to solve a complex problem people still have trouble with today¿
- It's an elegant solution to a common difficulty/headache we still have today... and it's using core Apache Server technology - NO server-side programming
- Faster and smaller toll on the server. If it can be done with less (PHP, MYSQL, etc.), why not?
- This example is configured to be used with [Apache](http://httpd.apache.org/docs/current/howto/ssi.html), but not much effort would be needed to make it work with [Nginx](http://nginx.org/en/docs/http/ngx_http_ssi_module.html)

```html
<section data-markdown="example.md" data-separator="^\n\n\n" data-vertical="^\n\n"></section>
```

```html
<section data-markdown>
    <script type="text/template">
        <!--#include virtual="/includes/200_html.inc" -->
    </script>
</section>
```

## When to use
- You have a simple and/or small site
- You need to support multiple languages
- You want to keep your static files organized, modular
- You are familiar with [regular expressions]()
- Your server is Apache


## When not to use
- If you need server-side logic code
