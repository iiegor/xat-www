<!DOCTYPE html>
<html>
<head>
  <meta charset="utf8">
  <title>xat</title>

  <link rel="stylesheet" href="<?php echo $SITE; ?>styles/style.css">
</head>
<body>
  <header id="view-header">
    <nav class="header-nav" role="navigation">
      <div class="inner clearfix">
        <div class="logo ">
          <a href="/" title="Home" class="logo-link"></a>
          
        </div>

        <ul class="nav">
          <!--<li class="nav-item active"><a href="/" class="nav-item-link">Home</a></li>-->
          <li class="nav-item ">
            <a href="/login" class="nav-item-link">Login</a>
          </li>
        </ul>
      </div>
    </nav>

    <div class="secondary-nav">
      <div class="inner clearfix">
        <ul class="nav">
          <li class="nav-item home active"><a class="nav-item-link" href="/">Home</a></li>
          <li class="nav-item groups"><a class="nav-item-link" href="/groups">Groups</a></li>
          <li class="nav-item store"><a class="nav-item-link" href="/store">Store</a></li>
        </ul>
      </div>
    </div>

    <div class="header-notice" data-bind="css: { show: showNotice }">
      <div class="inner">
        This site uses third-party cookies, if you continue viewing this site you're accepting our <a href="#terms">terms and conditions</a>. <a class="btn-okay" data-bind="click: hideNotice">okay</a>
      </div>
    </div>
  </header>
  
  <main id="view-content" role="main">
    <div class="inner">This is the home.

    Go to <a href="/room/lobby">Lobby</a> chat room.</div>
  </main>
