<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <title>Cibil System</title>
  <meta content="width=device-width, initial-scale=1.0" name="viewport">
  <meta content="" name="keywords">
  <meta content="" name="description">

  <!-- Favicons -->
  <link href="img/favicon.png" rel="icon">
  <link href="img/apple-touch-icon.png" rel="apple-touch-icon">

  <!-- Google Fonts -->
  <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,300i,400,400i,500,600,700,700i|Montserrat:300,400,500,600,700" rel="stylesheet">

  <!-- Bootstrap CSS File -->
  <link href="lib/bootstrap/css/bootstrap.min.css" rel="stylesheet">

  <!-- Libraries CSS Files -->
  <link href="lib/font-awesome/css/font-awesome.min.css" rel="stylesheet">
  <link href="lib/animate/animate.min.css" rel="stylesheet">
  <link href="lib/ionicons/css/ionicons.min.css" rel="stylesheet">
  <link href="lib/owlcarousel/assets/owl.carousel.min.css" rel="stylesheet">
  <link href="lib/lightbox/css/lightbox.min.css" rel="stylesheet">

  <!-- Main Stylesheet File -->
  <link href="css/style.css?version=55" rel="stylesheet">

</head>

<body>
  <!--==========================
  Header
  ============================-->
  <header id="header">

    <div id="topbar">
      <div class="container">
        <div class="social-links">
          <a href="" class="twitter"><i class="fa fa-twitter"></i></a>
          <a href="" class="facebook"><i class="fa fa-facebook"></i></a>
          <a href="" class="linkedin"><i class="fa fa-linkedin"></i></a>
          <a href="" class="instagram"><i class="fa fa-instagram"></i></a>
        </div>
      </div>
    </div>

    <div class="container">

      <div class="logo float-left">
        <!-- Uncomment below if you prefer to use an image logo -->
        <h1 class="text-light"><a href="index.php" class="scrollto"><span><i class="fa fa-university"></i> Cibil</span></a></h1>
        <!-- <a href="#header" class="scrollto"><img src="img/logo.png" alt="" class="img-fluid"></a> -->
      </div>

      <nav class="main-nav float-right d-none d-lg-block">
        <ul>
          <li class="active"><a href="#intro">Home</a></li>
          <li><a href="#about">About Us</a></li>
          <li><a href="#services">Services</a></li>
          <li><a href="#footer">Contact Us</a></li>
          <?php
            if(isset($_SESSION['username']) && $_SESSION['username']!=''){
          ?>
            <li class="drop-down"><a href="" id="user">Hi, <?php echo $_SESSION['username']; ?></a>
              <ul>
                <li><a href="assets/user/userhome.php">CIBIL SCORE</a></li>
                <li><a href="assets/user/userimprovement.php">IMPROVEMENT REPORT</a></li>
                <li><a href="assets/user/userprofile.php">MY PROFILE</a></li>
                <li><a class="login-btn" style="padding: 10px 20px!important; margin:0 10px!important;" id="userlogout">LOGOUT</a></li>
              </ul>
            </li>
          <?php 
            }
            else if(isset($_SESSION['corpname']) && $_SESSION['corpname']!=''){
          ?>
            <li class="drop-down"><a href="" id="user">Hi, <?php echo $_SESSION['corpname']; ?></a>
              <ul>
                <li><a href="assets/corporate/corporatehome.php">USER DETAILS</a></li>
                <li><a href="assets/corporate/corp_adduser.php">ADD A USER</a></li>
                <li><a href="assets/corporate/corpprofile.php">MY PROFILE</a></li>
                <li><a class="login-btn" style="padding: 10px 20px!important; margin:0 10px!important;" id="corplogout">LOGOUT</a></li>
              </ul>
            </li>
          <?php } else { ?>
          <li><a href="assets/login.php" class="login-btn" id="login">Login</a></li>
          <?php 
            } 
          ?>
        </ul>
      </nav><!-- .main-nav -->
      
    </div>
  </header><!-- #header -->