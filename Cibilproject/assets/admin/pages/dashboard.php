<link rel="icon" href="../../../img/favicon.png">
<?php
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
    require_once('header.php');
    require_once('../../config.php');
    $selectuser="SELECT * FROM `cibil_system_user`";
    $queryuser=mysqli_query($conn,$selectuser);
    $resuser=mysqli_num_rows($queryuser);
    $selectcorp="SELECT * FROM `cibil_system_corporate`";
    $querycorp=mysqli_query($conn,$selectcorp);
    $rescorp=mysqli_num_rows($querycorp);
    $selectadmin="SELECT * FROM `cibil_system_admin`";
    $queryadmin=mysqli_query($conn,$selectadmin);
    $resadmin=mysqli_num_rows($queryadmin);
?>

<style type="text/css">
  .content{
    margin-top: 3%;
    margin-left: 3%;
  }
  .small-box .icon{
    font-size: 60px;
    top:5px!important;
  }
</style>
  
  <title>Cibil System | Dashboard</title>

  <!-- Content Wrapper. Contains page content -->
  <div class="content-wrapper">
    <!-- Content Header (Page header) -->
    <section class="content-header">
      <h1>
        Dashboard
        <small>Control panel</small>
      </h1>
      <ol class="breadcrumb">
        <li><a href="dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
        <li class="active">Dashboard</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">

      <!-- Main row -->
      <div class="row">
        <div class="col-lg-1 col-xs-1"></div>
        <div class="col-lg-3 col-xs-3">
          <!-- small box -->
          <div class="small-box bg-aqua">
            <div class="inner">
              <h3><?php echo $resuser; ?></h3>

              <p>Users</p>
            </div>
            <div class="icon">
              <i class="fa fa-user" aria-hidden="true"></i>
            </div>
            <a href="userview.php" class="small-box-footer">
              View Users &nbsp <i class="fa fa-arrow-circle-right"></i>
            </a>
          </div>
        </div>
        <!-- ./col -->
        <div class="col-lg-3 col-xs-3">
          <!-- small box -->
          <div class="small-box bg-green">
            <div class="inner">
              <h3><?php echo $rescorp; ?></h3>

              <p>Corporate Users</p>
            </div>
            <div class="icon">
              <i class="fa fa-university" aria-hidden="true"></i>
            </div>
            <a href="corporateview.php" class="small-box-footer">
              View Corporate &nbsp <i class="fa fa-arrow-circle-right"></i>
            </a>
          </div>
        </div>
        <!-- ./col -->
        <div class="col-lg-3 col-xs-3">
          <!-- small box -->
          <div class="small-box bg-yellow">
            <div class="inner">
              <h3><?php echo $resadmin; ?></h3>

              <p>Admins</p>
            </div>
            <div class="icon">
              <i class="fa fa-user-secret" aria-hidden="true"></i>
            </div>
            <a href="admin_view.php" class="small-box-footer">
              View Admins &nbsp <i class="fa fa-arrow-circle-right"></i>
            </a>
          </div>
        </div>
        <div class="col-lg-1 col-xs-1"></div>
      </div>
      <!-- /.row (main row) -->

    </section>
    <!-- /.content -->

  </div>
  <!-- /.content-wrapper -->


<?php
    require_once('footer.php');
  }
  else if($_SESSION['admin_role']=='sub-admin'){
    header('Location:userimprovement.php');
  }else{
    require_once('error.php');
  }
?>

<script type="text/javascript">

  $('#dash').siblings('li').removeClass('active');
  var a=document.getElementById('dash');
  a.classList.add('active');
  
</script>

