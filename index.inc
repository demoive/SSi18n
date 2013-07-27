<!--
https://github.com/demoive/SSi18n

_____/\\\\\\\\\\\_______/\\\\\\\\\\\______________/\\\_____/\\\\\\\\\_____________________
____/\\\/////////\\\___/\\\/////////\\\________/\\\\\\\___/\\\///////\\\___________________
____\//\\\______\///___\//\\\______\///___/\\\_\/////\\\__\/\\\_____\/\\\___________________
______\////\\\___________\////\\\_________\///______\/\\\__\///\\\\\\\\\/____/\\/\\\\\\______
__________\////\\\___________\////\\\_______/\\\_____\/\\\___/\\\///////\\\__\/\\\////\\\_____
______________\////\\\___________\////\\\___\/\\\_____\/\\\__/\\\______\//\\\_\/\\\__\//\\\____
________/\\\______\//\\\___/\\\______\//\\\__\/\\\_____\/\\\_\//\\\______/\\\__\/\\\___\/\\\____
________\///\\\\\\\\\\\/___\///\\\\\\\\\\\/___\/\\\_____\/\\\__\///\\\\\\\\\/___\/\\\___\/\\\____
___________\///////////_______\///////////_____\///______\///_____\/////////_____\///____\///_____
-->

<!--
TODO:

- Create one vars.i18n.inc per language and only include the one for the current lang
- Add an mnav to distinguish from snav
- Be able to view existing files (instead of redirecting to home page)
- Section-specific meta description in header not working
- Get 404/500 working properly (and manageable)
- Consider using custom SSI start and end tags
- Go through .htaccess and make sure they work on a server
  - http://httpd.apache.org/docs/current/mod/mod_rewrite.html
  - http://httpd.apache.org/docs/current/rewrite/intro.html

NOTE:
- vars need to be used like this ${var} when used in expr comparisons
-->

<!--#set var="ssis.debug" value="false" -->
<!--#set var="ssis.debug" value="true" -->
<!--#set var="ssis.debug" value="silent" -->

<!--#set var="ssis.config.timefmt" value="%Y-%m-%d" -->
<!--#set var="ssis.config.sizefmt" value="abbrev" -->

<!--#config timefmt="${ssis.config.timefmt}" -->
<!--#config sizefmt="${ssis.config.sizefmt}" -->

<!--#set var="ssis.lang.default" value="en" -->
<!--#if expr="$REQUEST_URI == /^(?:\/([a-z]{2}))?(\/.*?)?([?].*?)?$/" -->
  <!--#set var="ssis.lang" value="$1" -->
  <!--#set var="ssis.route" value="$2" -->
  <!--#set var="ssis.query" value="$3" -->
<!--#endif -->
<!--#if expr="${ssis.lang} == ''" -->
  <!--#set var="ssis.lang" value="${ssis.lang.default}" -->
<!--#endif -->

<!--#if expr='${ssis.lang} != ${ssis.lang.default}' -->
  <!--#set var="ssis.route.prefix" value="/${ssis.lang}" -->
<!--#else -->
  <!--#set var="ssis.route.prefix" value="" -->
<!--#endif -->

<!--#include virtual="/_includes/routes.inc" -->
<!--#include virtual="/_includes/vars.inc" -->
<!--#include virtual="/_includes/vars.i18n.inc" -->

<!-- Setup complete. Bootstrap the template -->
<!--#if expr="${ssis.route.code} == ''" -->
  <!--#include virtual="/_includes/html_400.inc" -->
<!--#else -->
  <!--#include virtual="/_includes/html.inc" -->
<!--#endif -->

<!--#if expr="${ssis.debug} == 'true'" -->
  <!--#printenv -->
<!--#elif expr="${ssis.debug} == 'silent'" -->
  <!--
  <!--#printenv -->
  -->
<!--#endif -->
