<!DOCTYPE html>
<html>
<head>
  <meta charset="utf8">
  <title><?php echo $CONF['site_name']; ?></title>

  <link rel="stylesheet" href="//fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700">
  <link rel="stylesheet" href="<?php echo $SITE; ?>styles/style.css">
</head>
<body>
  <header id="view-header" role="banner">
    <nav class="header-nav" role="navigation">
      <div class="inner clearfix">
        <div class="logo ">
          <a href="/" title="Home" class="logo-link"></a>
          
        </div>

        <ul class="nav">
          <!--<li class="nav-item active"><a href="/" class="nav-item-link">Home</a></li>-->
          <li class="nav-item <?php echo $PAGE == 'login' ? 'active' : '' ?>">
            <a href="/login" class="nav-item-link">Login</a>
          </li>
        </ul>
      </div>
    </nav>

    <div class="secondary-nav">
      <div class="inner clearfix">
        <ul class="nav">
          <li class="nav-item home <?php echo $PAGE == 'index' ? 'active' : '' ?>"><a class="nav-item-link" href="/">Home</a></li>
          <li class="nav-item groups <?php echo $PAGE == 'groups' ? 'active' : '' ?>"><a class="nav-item-link" href="/groups">Groups</a></li>
          <li class="nav-item store <?php echo $PAGE == 'store' ? 'active' : '' ?>"><a class="nav-item-link" href="/store">Store</a></li>
        </ul>
      </div>
    </div>

    <div class="header-notice">
      <div class="inner">
        This site uses third-party cookies, if you continue viewing this site you're accepting our <a href="#terms">terms and conditions</a>. <a class="btn-okay">okay</a>
      </div>
    </div>
  </header>
  
  <div id="view-content" role="main">
    <div class="inner">
