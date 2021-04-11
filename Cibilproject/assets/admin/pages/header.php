<?php
  $name=$_SESSION['admin_name'];
?>

<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <link rel="icon" href="../../../img/favicon.png">
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
  <!-- AdminLTE Skins. Choose a skin from the css/skins
       folder instead of downloading all of them to reduce the load. -->
  <link rel="stylesheet" href="../dist/css/skins/_all-skins.min.css">
  <!-- bootstrap wysihtml5 - text editor -->
  <link rel="stylesheet" href="../plugins/bootstrap-wysihtml5/bootstrap3-wysihtml5.min.css">

  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jquery-modal/0.9.1/jquery.modal.min.css" />

  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
  <script src="https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js"></script>
  <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
  <![endif]-->

  <!-- Google Font -->
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700,300italic,400italic,600italic">
</head>
<body class="hold-transition skin-blue sidebar-mini">
<div class="wrapper">
  <header class="main-header">
    <!-- Logo -->
    <a href="" class="logo">
      <!-- mini logo for sidebar mini 50x50 pixels -->
      <span class="logo-mini"><b>CB</b>S</span>
      <!-- logo for regular state and mobile devices -->
      <span class="logo-lg"><b>CIBIL</b>SYSTEM</span>
    </a>
    <!-- Header Navbar: style can be found in header.less -->
    <nav class="navbar navbar-static-top">
      <!-- Sidebar toggle button-->
      <a href="#" class="sidebar-toggle" data-toggle="push-menu" role="button">
        <span class="sr-only">Toggle navigation</span>
      </a>

      <div class="navbar-custom-menu">
        <ul class="nav navbar-nav">
          <!-- User Account: style can be found in dropdown.less -->
          <li class="dropdown user user-menu">
            <a href="" class="dropdown-toggle" data-toggle="dropdown">
              <img src="../dist/img/user1-128x128.jpg" class="user-image" alt="User Image">
              <span class="hidden-xs"><?php echo $name; ?></span>
            </a>
            <ul class="dropdown-menu">
              <!-- User image -->
              <li class="user-header" style="background-color: #222d32;">
                <img src="../dist/img/user1-128x128.jpg" class="img-circle" alt="User Image">

                <p style="color:white;">
                  <?php echo $name; ?>
                  <small>Administrator</small>
                </p>
              </li>
              <!-- Menu Footer-->
              <li class="user-footer" style="background-color: #3c8dbc;">
                <div class="text-center">
                  <a id="adminlogout" class="btn btn-default btn-flat signout">Sign Out</a>
                </div>
              </li>
            </ul>
          </li>
        </ul>
      </div>
    </nav>
  </header>
  <!-- Left side column. contains the logo and sidebar -->
  <aside class="main-sidebar">
    <!-- sidebar: style can be found in sidebar.less -->
    <section class="sidebar">
      <!-- Sidebar user panel -->
      <div class="user-panel">
        <div class="pull-left image">
          <img src="../dist/img/user1-128x128.jpg" class="img-circle" alt="User Image">
        </div>
        <div class="pull-left info">
          <p><?php echo $name; ?></p>
          <a href="dashboard.php"><i class="fa fa-circle text-success"></i> Administrator</a>
        </div>
      </div>
      <!-- sidebar menu: : style can be found in sidebar.less -->
      <ul class="sidebar-menu" data-widget="tree">
        <li class="header">MAIN NAVIGATION</li>
        <?php
          if(isset($_SESSION['admin_role']) && $_SESSION['admin_role']=='admin'){
        ?>
        <li id="dash">
          <a href="dashboard.php">
            <i class="fa fa-dashboard"></i> <span>Dashboard</span>
          </a>
        </li>
        <li id="admin">
          <a href="admin_view.php">
            <i class="fa fa-user-secret" aria-hidden="true"></i> <span>Admin</span>
            <span class="pull-right-container">
              <i class="fa fa-angle-right pull-left"></i>
            </span>
          </a>
          <ul class="treeview-menu">
            <li id="sub_admin"><a href="addsubadmin.php"><i class="fa fa-circle-o"></i> Add Sub Admin </a></li>
          </ul>
        </li>
        <li id="corporate">
          <a href="corporateview.php">
            <i class="fa fa-university" aria-hidden="true"></i>
            <span>Corporate</span>
            <span class="pull-right-container">
              <i class="fa fa-angle-right pull-left"></i>
            </span>
          </a>
        </li>
        <?php
          }
        ?>
        <li class="treeview" id="user">
          <a href="">
            <i class="fa fa-user" aria-hidden="true"></i>
            <span>User</span>
            <span class="pull-right-container">
              <i class="fa fa-angle-left pull-right"></i>
            </span>
          </a>
          <ul class="treeview-menu">
            <?php
              if(isset($_SESSION['admin_role']) && $_SESSION['admin_role']=='admin'){
            ?>
            <li id="view_user"><a href="userview.php"><i class="fa fa-circle-o"></i> View User Details</a></li>
            <li id="view_score"><a href="userscore.php"><i class="fa fa-circle-o"></i> View User Score</a></li>
            <?php
              }
            ?>
            <li id="view_improv"><a href="userimprovement.php"><i class="fa fa-circle-o"></i> Improvement Report</a></li>
          </ul>
        </li>
    </section>
    <!-- /.sidebar -->
  </aside>


  <style type="text/css">
    .signout{
      background-color:#222d32!important;
      color:white!important;
      border-radius: 5px!important;
      padding:5px 25px!important;
    }
    .signout:hover{
      background-color:white!important;
      color:#222d32!important;
    }
  </style>

