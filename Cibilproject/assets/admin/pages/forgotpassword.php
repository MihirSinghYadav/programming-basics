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
  <title>CIBIL SYSTEM | Forgot Password</title>
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

  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
  <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
  <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
  <![endif]-->

  <!-- Google Font -->
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700,300italic,400italic,600italic">
</head>
<body class="hold-transition lockscreen">

<style type="text/css">
  body{
    overflow: hidden;
  }
  .enter:focus, .enter:active:focus{
    outline: none;
  }
  .reseterror{
    color:red;
  }
</style>

<!-- Automatic element centering -->
<div class="lockscreen-wrapper">
  <div class="lockscreen-logo">
    <a href="../../index2.html"><b>CIBIL</b>SYSTEM</a>
  </div>
  <!-- User name -->

  <!-- START LOCK SCREEN ITEM -->
  <!-- <div class="lockscreen-item"> -->

    <!-- lockscreen credentials (contains the form) -->
    <center><form action="resetpassword.php" method="post">
      <div class="input-group col-xs-9" id="group">
        <input type="text" id="email" class="form-control" placeholder="Username" name="username" id="username">

        <div class="input-group-btn" id="btn">
          <button type="submit" class="btn enter" style="border:none; background-color: white;"><i class="fa fa-arrow-right text-muted"></i></button>
        </div>
      </div>
    </form></center>
    <!-- /.lockscreen credentials -->
  <!-- </div> -->
  <!-- /.lockscreen-item -->
  <?php
    if(isset($_GET['reset_error']) && $_GET['reset_error']==1){
      echo "<br><p class='reseterror text-bold text-center'>Please Enter Your Username</p><br>";
    }
    if(isset($_GET['reset_error']) && $_GET['reset_error']==2){
      echo "<br><p class='reseterror text-bold text-center'>Username Does Not Exist</p><br>";
    }
    if(isset($_GET['change_error']) && $_GET['change_error']==1){
  ?>
  <script type="text/javascript">
    document.getElementById('group').style.display = "none";
    document.getElementById('btn').style.display = "none";
  </script>
  <?php
      $username=$_GET['username'];
      echo "<center><form action='changepassword.php' method='post'>
      <div class='input-group col-xs-9'>
        <input type='text' class='form-control' placeholder='Username' name='username' value='$username' readonly><br><br>
        <br><input type='password' class='form-control' placeholder='New Password' name='password'></br>
        <br><input type='password' class='form-control' placeholder='Re-type Password' name='repassword'>
        <br><br><br><p class='reseterror text-bold text-center'>Please Enter Password Fields</p>
        <br><button type='submit' class='btn btn-primary btn-block btn-flat' style='margin-top: 15px; margin-bottom: 15px;'>Reset Password</button>
        <a type='button' href='../index.php'>Cancel</a>
      </div>
    </form></center>";
    }
    if(isset($_GET['change_error']) && $_GET['change_error']==2){
   ?>
  <script type="text/javascript">
    document.getElementById('group').style.display = "none";
    document.getElementById('btn').style.display = "none";
  </script>
  <?php
      $username=$_GET['username'];
      echo "<center><form action='changepassword.php' method='post'>
      <div class='input-group col-xs-9'>
        <input type='text' class='form-control' placeholder='Username' name='username' value='$username' readonly><br><br>
        <br><input type='password' class='form-control' placeholder='New Password' name='password'></br>
        <br><input type='password' class='form-control' placeholder='Re-type Password' name='repassword'>
        <br><br><br><p class='reseterror text-bold text-center'>Password Does Not Match</p>
        <br><button type='submit' class='btn btn-primary btn-block btn-flat' style='margin-top: 15px; margin-bottom: 15px;'>Reset Password</button>
        <a type='button' href='../index.php'>Cancel</a>
      </div>
    </form></center>";
    }
    if(isset($_GET['reset_pass']) && $_GET['reset_pass']==1){
  ?>
  <script type="text/javascript">
    document.getElementById('group').style.display = "none";
    document.getElementById('btn').style.display = "none";
  </script>
  <?php
      $username=$_GET['username'];
      echo "<center><form action='changepassword.php' method='post'>
      <div class='input-group col-xs-9'>
        <input type='text' class='form-control' placeholder='Username' name='username' value='$username' readonly><br><br>
        <br><input type='password' class='form-control' placeholder='New Password' name='password'></br>
        <br><input type='password' class='form-control' placeholder='Re-type Password' name='repassword'>
        <br><br><br><button type='submit' class='btn btn-primary btn-block btn-flat' style='margin-top: 15px; margin-bottom: 15px;'>Reset Password</button>
        <a type='button' href='../index.php'>Cancel</a>
      </div>
    </form></center>";
    }
  ?>
  <br>
  <div class="help-block text-center" id="reset">
    Enter your Username to reset your password
  </div>
  <div class="text-center" id="sign">
    <a href="../index.php">Or sign in as a different user</a>
  </div>
  <?php
    if(isset($_GET['reset_pass']) && $_GET['reset_pass']==1){
  ?>
  <script type="text/javascript">
    document.getElementById('reset').style.display = "none";
    document.getElementById('sign').style.display = "none";
  </script>
  <?php } ?>
  </br>
  <div class="lockscreen-footer text-center">
    Copyright &copy; 2016-2022 <b><a href="../index.php" style="color:#367fa9;">Cibil System </a></b><br>
    All rights reserved
  </div>
</div>
<!-- /.center -->

<!-- jQuery 3 -->
<script src="../bower_components/jquery/dist/jquery.min.js"></script>
<!-- Bootstrap 3.3.7 -->
<script src="../bower_components/bootstrap/dist/js/bootstrap.min.js"></script>
</body>
</html>


<?php
  }
?>