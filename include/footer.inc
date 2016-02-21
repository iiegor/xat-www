  	</div>
  </div>

  <footer id="footer">
    <div class="container text-centered">
      <a href="https://github.com/iiegor" class="author">made by @iiegor</a>
    </div>
  </footer>
  
  <?php
  if ($CONF['environment'] === 'production') {
  ?>
  <script src="<?php echo $SITEJS; ?>/<?php echo $REV['js']; ?>.js"></script>
  <?php
  } else {
  ?>
  <script type="text/javascript" src="<?php echo $SITEJS; ?>/vendor/sprint.min.js"></script>
  <script type="text/javascript" src="<?php echo $SITEJS; ?>/class.js"></script>
  <script type="text/javascript" src="<?php echo $SITEJS; ?>/main.js"></script>
  <?php
  }
  ?>
</body>
</html>
