	<head>
		<meta charset="utf-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
		<title><!--#echo var="ssis.i18n.${ssis.lang}.meta.title" --></title>
		<link rel="shortcut icon" href="/favicon.png">
<!-- if expr="${ssis.route.code}" -->
	<!-- if expr="ssis.i18n.${ssis.lang}.meta.desc.${ssis.route.code}" -->
		<!-- <meta name="description" content="<!--#echo var='ssis.i18n.${ssis.lang}.meta.desc.${ssis.route.code}' --"> -->
	<!-- endif -->
<!-- elif -->
		<meta name="description" content="<!--#echo var='ssis.i18n.${ssis.lang}.meta.desc' -->">	
<!-- endif -->
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
	</head>