<!--
Copyright....
Generated with SSiSS
https://github.com/demoive/SSiSS
COOL ASCII GRAPHIC
-->

<!-- CONFIGURE ENVIRONMENT PARAMETERS -->
<!--#config errmsg="<!-- Error. Contact: info@company.com -->" -->
<!--#config timefmt="%d/%m/%y" -->
<!--#config sizefmt="abbrev" -->



<!-- NOT WORKING -->
<!-- debug = true, silent, false -->
<!--#set var="debug" value="true" -->
<!--#set var="errmsg_custom" value="Error. Contact: info@company.com" -->
<!--#if expr="$debug == true" -->
  <!--#config errmsg="[${errmsg_custom}]" -->
<!--#else -->
  <!--#config errmsg="<!-- ${errmsg_custom} -->" -->
<!--#endif -->







<!-- extract the hash, hostname, port, protocol -->
<!-- rename route to ssis_pathname and query to ssis_search? lang to lbs_lang -->


<!-- EXTRACT INFORMATION FROM THE URL -->
<!--#if expr="$REQUEST_URI == /^(?:\/([a-z]{2}))?(\/[0-9a-zA-Z|\.,~_\/-]*)?([?].*)?$/" -->
  <!--#set var="lang" value="$1" -->
  <!--#set var="route" value="$2" -->
  <!--#set var="query" value="$3" -->
<!--#endif -->

<!-- SETS THE DEFAULT VALUES IF THEY WEREN'T FOUND IN THE URL -->
<!--#if expr="$lang == ''" -->
  <!--#set var="lang" value="en" -->
<!--#endif -->


<!--#set var="site-name_en" value="My First SSiS Site" -->
<!--#set var="site-name_fr" value="Mon Premier Site SSiS" -->
<!--#set var="site-description_en" value="My SSiS Site description" -->
<!--#set var="site-description_fr" value="Mon SSIS Description du Site SSiS" -->

<!--#if expr="$route == /^\/section1\/?$/       " --><!--#set var="path" value="1-0" --><!--#endif -->
<!--#if expr="$route == /^\/section1\/sub-section1\/?$/ " --><!--#set var="path" value="1-1" --><!--#endif -->
<!--#if expr="$route == /^\/section\/sub-section2\/?$/ " --><!--#set var="path" value="1-2" --><!--#endif -->
<!--#if expr="$route == /^\/section1\/?$/        " --><!--#set var="path" value="2-0" --><!--#endif -->
<!--#if expr="$route == /^\/section2\/subsection1\/?$/ " --><!--#set var="path" value="2-1" --><!--#endif -->



<!--MIGHT NOT NEED THIS CONDITION HERE IF IT'S TAKEN CARE OF IN .HTACCESS-->
<!--OR MAYBE THE CONDITION NEEDS TO BE WITH THE HTTP_STATUS-->
<!-- Setup complete. Bootstrap the template -->
<!--#if expr="$path == ''" -->
  <!--#include virtual="/includes/404_html.inc" -->
<!--#else -->
  <!--#include virtual="/includes/200_html.inc" -->
<!--#endif -->

<!--
<!--#printenv -->
-->