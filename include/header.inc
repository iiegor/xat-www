<!DOCTYPE html>
<html ng-app="xat">
<head>
  <meta charset="utf8">
  <title><?php echo $CONF['site_name']; ?></title>

  <link rel="stylesheet" href="<?php echo $SITE; ?>static/styles/vendor/angular-material.css">
  <link rel="stylesheet" href="<?php echo $SITE; ?>static/styles/style.css">
</head>
<body ng-controller="<?php echo ucfirst($PAGE) . 'Controller'; ?>">
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

    <div class="secondary-nav md-whiteframe-2dp">
      <md-content class="inner">
        <md-tabs class="tabs" md-no-ink>
          <md-tab>
            Home
          </md-tab>

          <md-tab>
            Groups
          </md-tab>

          <md-tab>
            Store
          </md-tab>
        </md-tabs>
      </md-content>
    </div>

    <div class="header-notice" style="display: block">
      <div class="inner">
        This site uses third-party cookies, if you continue viewing this site you're accepting our <a href="/terms">terms and conditions</a>. <a class="btn-okay">okay</a>
      </div>
    </div>
  </header>
  
  <div id="view-content" role="main">
    <div class="inner">
