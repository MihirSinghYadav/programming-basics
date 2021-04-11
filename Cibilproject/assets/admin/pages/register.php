<?php
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
    header('Location:dashboard.php');
  }
  else if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='sub-admin'){
    header('Location:userimprovement.php');
  }
  else{
?>

<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <title>CIBIL SYSTEM | Registration Page</title>
  <!-- Tell the browser to be responsive to screen width -->
  <meta content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" name="viewport">
  <!-- Bootstrap 3.3.7 -->
  <link rel="stylesheet" href="../bower_components/bootstrap/dist/css/bootstrap.min.css">
  <!-- Font Awesome -->
  <link rel="stylesheet" href="../bower_components/font-awesome/css/font-awesome.min.css">
  <!-- Ionicons -->
  <link rel="stylesheet" href="../bower_components/Ionicons/css/ionicons.min.css">
  <!-- Theme style -->
  <link rel="stylesheet" href="../dist/css/AdminLTE.min.css">
  <!-- iCheck -->
  <link rel="stylesheet" href="../plugins/iCheck/flat/blue.css">

  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
  <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
  <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
  <![endif]-->

  <!-- Google Font -->
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700,300italic,400italic,600italic">
</head>
<body class="hold-transition register-page">


<style type="text/css">
  body{
    overflow: hidden;
  }
  .regerror{
    color:red;
  }
</style>


<div class="register-box">
  <div class="register-logo">
    <a href="register.php"><b>CIBIL</b>SYSTEM</a>
  </div>

  <div class="register-box-body">
    <p class="login-box-msg">Register a New Admin</p>

    <form action="registerdetails.php" method="post" id="adminregisterform">
      <div class="form-group has-feedback">
        <input type="text" class="form-control" placeholder="Full name" name="name" id="name">
        <span class="glyphicon glyphicon-user form-control-feedback"></span>
        <div class="nameerror text-danger"></div>
      </div>
      <div class="form-group has-feedback">
        <input type="email" class="form-control" placeholder="Email" name="email" id="email">
        <span class="glyphicon glyphicon-envelope form-control-feedback"></span>
        <div class="emailerror text-danger"></div>
      </div>
      <div class="form-group has-feedback">
        <input type="text" class="form-control" placeholder="Username" name="username" id="username">
        <span class="glyphicon glyphicon-user form-control-feedback"></span>
        <div class="usererror text-danger"></div>
      </div>
      <div class="form-group has-feedback">
        <input type="password" class="form-control" placeholder="Password" name="password" id="password">
        <span class="glyphicon glyphicon-lock form-control-feedback"></span>
        <div class="passerror text-danger"></div>
      </div>
      <div class="form-group has-feedback">
        <input type="password" class="form-control" placeholder="Re-type password" name="repassword" id="resetpassword">
        <span class="glyphicon glyphicon-log-in form-control-feedback"></span>
        <div class="repasserror text-danger"></div>
      </div>
      <button type="submit" class="btn btn-primary btn-block btn-flat" style="margin-top:15px; margin-bottom: 5px;" id="adminregistersubmit">Register</button>
    </form>
    <br>
    <p class="login-box-msg">Already an Admin?&nbsp<span><a href="../index.php" class="text-center"> Sign in</a></span></p>
  </div>
  <!-- /.form-box -->
</div>
<!-- /.register-box -->
<div class="lockscreen-footer text-center">
    Copyright &copy; 2016-2022 <b><a href="index.php" style="color:#367fa9;">Cibil System </a></b><br>
    All rights reserved
</div>

<!-- jQuery 3 -->
<script src="../bower_components/jquery/dist/jquery.min.js"></script>
<!-- Bootstrap 3.3.7 -->
<script src="../bower_components/bootstrap/dist/js/bootstrap.min.js"></script>
<!-- iCheck -->
<script src="../plugins/iCheck/icheck.min.js"></script>
<script src="../../../lib/easing/easing.min.js"></script>
<script src="../../../lib/mobile-nav/mobile-nav.js"></script>
<script src="../../../lib/wow/wow.min.js"></script>
<script src="../../../lib/waypoints/waypoints.min.js"></script>
<script src="../../../lib/counterup/counterup.min.js"></script>
<script src="../../../lib/owlcarousel/owl.carousel.min.js"></script>
<script src="../../../lib/isotope/isotope.pkgd.min.js"></script>
<script src="../../../lib/lightbox/js/lightbox.min.js"></script>
  <!-- Contact Form JavaScript File -->
<script src="../../../contactform/contactform.js"></script>
<script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
<script src="../../../lib/wow/wow.min.js"></script>
<script src="../../../js/main.js"></script>
<script>
  $(function () {
    $('input').iCheck({
      checkboxClass: 'icheckbox_flat-blue',
      radioClass: 'iradio_square-blue',
      increaseArea: '20%' /* optional */
    });
  });
  $('#name').keyup(function(event) {
    $('.nameerror').text("");
  });
  $('#email').keyup(function(event) {
    $('.emailerror').text("");
  });
  $('#username').keyup(function(event) {
    $('.usererror').text("");
  });
  $('#password').keyup(function(event) {
    $('.passerror').text("");
  });
  $('#resetpassword').keyup(function(event) {
    $('.repasserror').text("");
  });
</script>

<?php
  if(isset($_GET['register_error']) && $_GET['register_error']==1){
?>
<script type="text/javascript">
  swal("Username Already Exists", "Please try another username", "error");
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