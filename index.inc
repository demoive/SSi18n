<!--
Generated with SSiSS
https://github.com/demoive/SSiSS

  _____/\\\\\\\\\\\_______/\\\\\\\\\\\_____________/\\\\\\\\\\\_______/\\\\\\\\\\\___        
   ___/\\\/////////\\\___/\\\/////////\\\_________/\\\/////////\\\___/\\\/////////\\\_       
    __\//\\\______\///___\//\\\______\///___/\\\__\//\\\______\///___\//\\\______\///__      
     ___\////\\\___________\////\\\_________\///____\////\\\___________\////\\\_________     
      ______\////\\\___________\////\\\_______/\\\______\////\\\___________\////\\\______    
       _________\////\\\___________\////\\\___\/\\\_________\////\\\___________\////\\\___   
        __/\\\______\//\\\___/\\\______\//\\\__\/\\\__/\\\______\//\\\___/\\\______\//\\\__  
         _\///\\\\\\\\\\\/___\///\\\\\\\\\\\/___\/\\\_\///\\\\\\\\\\\/___\///\\\\\\\\\\\/___ 
          ___\///////////_______\///////////_____\///____\///////////_______\///////////_____
-->

<!--
TODO:
- Get 404/500 working properly (and manageable)
- Define routes
- Consider using custom SSI start and end tags
- Go through .htaccess and make sure they work on a server
-->

<!--#set var="ssis.debug" value="true" -->
<!--#set var="ssis.debug" value="silent" -->
<!--#config sizefmt="abbrev" -->

<!--#set var="ssis.lang.default" value="en" -->
<!--#if expr="$REQUEST_URI == /^(?:\/([a-z]{2}))?(\/.*?)?([?].*?)?$/" -->
  <!--#set var="ssis.lang" value="$1" -->
  <!--#set var="ssis.route" value="$2" -->
  <!--#set var="ssis.query" value="$3" -->
<!--#endif -->
<!--#if expr="${ssis.lang} == ''" -->
  <!--#set var="ssis.lang" value="${ssis.lang.default}" -->
<!--#endif -->

<!--#include virtual="/includes/routes.inc" -->
<!--#include virtual="/includes/i18n.inc" -->

<!-- Setup complete. Bootstrap the template -->
<!--#if expr="${ssis.route.code} == ''" -->
  <!--#include virtual="/includes/404_html.inc" -->
<!--#else -->
  <!--#include virtual="/includes/200_html.inc" -->
<!--#endif -->

<!--#if expr="${ssis.debug} == 'true'" -->
  <!--#printenv -->
<!--#elif expr="${ssis.debug} == 'silent'" -->
  <!--
  <!--#printenv -->
  -->
<!--#endif -->
