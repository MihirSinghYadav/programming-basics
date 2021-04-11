<?php
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!=""){
    header('Location:pages/dashboard.php');
  }
  else{
?>
<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <title>CIBIL SYSTEM | Log in</title>
  <link rel="icon" href="../../img/favicon.png">
  <!-- Tell the browser to be responsive to screen width -->
  <meta content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" name="viewport">
  <!-- Bootstrap 3.3.7 -->
  <link rel="stylesheet" href="bower_components/bootstrap/dist/css/bootstrap.min.css">
  <!-- Font Awesome -->
  <link rel="stylesheet" href="bower_components/font-awesome/css/font-awesome.min.css">
  <!-- Ionicons -->
  <link rel="stylesheet" href="bower_components/Ionicons/css/ionicons.min.css">
  <!-- Theme style -->
  <link rel="stylesheet" href="dist/css/AdminLTE.min.css">
  <!-- iCheck -->
  <link rel="stylesheet" href="plugins/iCheck/flat/blue.css">

  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
  <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
  <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
  <![endif]-->

  <!-- Google Font -->
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700,300italic,400italic,600italic">
</head>
<body class="hold-transition login-page">

<style type="text/css">
  body{
    overflow: hidden;
  }
  .logerror{
    color:red;
  }
</style>

<div class="login-box">
  <div class="login-logo">
    <a href="index.php"><b>CIBIL </b>SYSTEM</a>
  </div>
  <!-- /.login-logo -->
  <div class="login-box-body">
    <h4 class="text-center text-bold">ADMIN LOGIN</h4>
    <p class='login-box-msg text-success'>Sign in to start your session</p>
    <form action="pages/logindetails.php" method="post" id="adminloginform">
      <div class="form-group has-feedback">
        <input type="text" class="form-control" placeholder="Username" name="username" id="username">
        <span class="glyphicon glyphicon-envelope form-control-feedback"></span>
        <div class="usererror text-danger"></div>
      </div>
      <div class="form-group has-feedback">
        <input type="password" class="form-control" placeholder="Password" name="password" id="password">
        <span class="glyphicon glyphicon-lock form-control-feedback"></span>
        <div class="passerror text-danger"></div>
      </div>
      <div class="row">
        <div class="col-xs-7">
        </div>
        <!-- /.col -->
        <div class="col-xs-5" style=" margin-top: 1px; margin-bottom: 1px;">
          <a href="pages/forgotpassword.php">Forgot password</a><br>
        </div>
        <!-- /.col -->
      </div>
      <button type="submit" class="btn btn-primary btn-block btn-flat" style="margin-top: 15px; margin-bottom: 15px;" id="adminloginsubmit">Sign In</button>
    </form>

    <!-- <center><a href="pages/register.php">Register a new Admin</a></center> -->

  </div>
  <!-- /.login-box-body -->
</div>
<!-- /.login-box -->
<div class="lockscreen-footer text-center">
    Copyright &copy; 2016-2022 <b><a href="index.php" style="color:#367fa9;">Cibil System </a></b><br>
    All rights reserved
</div>

<!-- jQuery 3 -->
<script src="bower_components/jquery/dist/jquery.min.js"></script>
<!-- Bootstrap 3.3.7 -->
<script src="bower_components/bootstrap/dist/js/bootstrap.min.js"></script>
<!-- iCheck -->
<script src="plugins/iCheck/icheck.min.js"></script>
<script src="../../lib/easing/easing.min.js"></script>
<script src="../../lib/mobile-nav/mobile-nav.js"></script>
<script src="../../lib/wow/wow.min.js"></script>
<script src="../../lib/waypoints/waypoints.min.js"></script>
<script src="../../lib/counterup/counterup.min.js"></script>
<script src="../../lib/owlcarousel/owl.carousel.min.js"></script>
<script src="../../lib/isotope/isotope.pkgd.min.js"></script>
<script src="../../lib/lightbox/js/lightbox.min.js"></script>
  <!-- Contact Form JavaScript File -->
<script src="../../contactform/contactform.js"></script>
<script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
<script src="../../lib/wow/wow.min.js"></script>
<script src="../../js/main.js"></script>
<script>
  $(function () {
    $('input').iCheck({
      checkboxClass: 'icheckbox_flat-blue',
      radioClass: 'iradio_square-blue',
      increaseArea: '20%' /* optional */
    });
  });
  $('#username').keyup(function(event) {
    $('.usererror').text("");
  });
  $('#password').keyup(function(event) {
    $('.passerror').text("");
  });
</script>

<?php
  if(isset($_GET['error']) && $_GET['error']==1){
?>
<script type="text/javascript">
  swal("", "Incorrect Username or Password!", "error");
</script>
<?php
  }
?>

<?php
  if(isset($_GET['register_success']) && $_GET['register_success']==1){
?>
<script type="text/javascript">
  swal("Registered Successfully", "Sign In to start your Session", "success");
</script>
<?php
  }
?>

<?php
  if(isset($_GET['reset_success']) && $_GET['reset_success']==1){
?>
<script type="text/javascript">
  swal("Password Reset Successfully", "Please Login with new password", "success");
</script>
<?php
  }
?>

<script type="text/javascript">
  var oldWindowURL = window.location.href;
  var index = oldWindowURL.indexOf('?');
  var newWindowURL = oldWindowURL.substring(0,index);
  window.history.pushState(null, null, newWindowURL);
</script>

</body>
</html>

<?php
  }
?>
