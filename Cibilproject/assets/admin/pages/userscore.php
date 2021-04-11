<?php 
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
  	require_once('header.php');
    require_once('../../config.php');
    $select="SELECT `cibil_system_user`.* , `cibil_system_bankname`.*, `cibil_system_userscore`.* FROM `cibil_system_user` JOIN `cibil_system_bankname` ON `cibil_system_user`.bank_id=`cibil_system_bankname`.id JOIN `cibil_system_userscore` ON `cibil_system_user`.score_id=`cibil_system_userscore`.id ORDER BY `cibil_system_user`.id DESC";
    $query=mysqli_query($conn,$select);
?>

  <style type="text/css">
    .content{
      margin-top: 2%;
    }
    img{
      width:150px;
      height: 100px;
    }
    .image_modal{
    	width:400px;
    	height:300px;
    }
    .prodsuccess{
      color:green;
    }
    .btn{
    	padding:2px 10px;
    	margin-bottom: 5px;
    }

    #example1{
      overflow-x: auto;
    }
  </style>

<link rel="stylesheet" href="../bower_components/datatables.net-bs/css/dataTables.bootstrap.min.css">
<link rel="stylesheet" href="../dist/css/AdminLTE.min.css">


  <title>AdminPANEL | View User Score</title>
 <!-- Content Wrapper. Contains page content -->
  <div class="content-wrapper">
    <!-- Content Header (Page header) -->
    <section class="content-header">
      <h1>
        Users
        <small>Control panel</small>
      </h1>
      <ol class="breadcrumb">
        <li><a href="dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
        <li><a href="">Users</a></li>
        <li class="active">View User Score</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">

      <!-- Main row -->
      <div class="row">
        <div class="col-xs-12">
          <div class="box">
            <div class="box-header">
              <h3 class="box-title text-bold">USER SCORE DETAILS</h3>
            </div>
            <!-- /.box-header -->
            <div class="box-body table-responsive">
              <table id="example1" class="table table-bordered table-striped ">
                <thead>
                <tr>
                  <th>ID</th>
                  <th>Name</th>
                  <th>Bank Name</th>
                  <th>CC Dues</th>
                  <th>CC Dues Query</th>
                  <th>Pending Loan</th>
                  <th>PL Query</th>
                  <th>Check Bounce</th>
                  <th>CB Query</th>
                  <th>Scam</th>
                  <th>Scam Query</th>
                  <th>Score</th>
                </tr>
                </thead>
                <tbody>
                <?php
                  $i=1;
                  while($res=mysqli_fetch_object($query)){
                ?>
                <tr>
                  <td><?php echo $i++; ?></td>
                  <td><?php echo $res->name; ?></td>
                  <td><?php echo $res->bank_name; ?></td>
                  <td><?php echo $res->ccdues; ?></td>
                  <td><?php echo $res->ccdues_query; ?></td>
                  <td><?php echo $res->pending_loan; ?></td>
                  <td><?php echo $res->pendingloan_query; ?></td>
                  <td><?php echo $res->bounce_check; ?></td>
                  <td><?php echo $res->bouncecheck_query; ?></td>
                  <td><?php echo $res->scam; ?></td>
                  <td><?php echo $res->scam_query; ?></td>
                  <td><?php echo $res->score; ?></td>
                </tr>
                <?php
                  }
                ?>
                </tbody>
                <tfoot>
                <tr>
                  <th>ID</th>
                  <th>Name</th>
                  <th>Bank Name</th>
                  <th>CC Dues</th>
                  <th>CC Dues Query</th>
                  <th>Pending Loan</th>
                  <th>PL Query</th>
                  <th>Check Bounce</th>
                  <th>CB Query</th>
                  <th>Scam</th>
                  <th>Scam Query</th>
                  <th>Score</th>
                </tr>
                </tfoot>
              </table>
            </div>
            <!-- /.box-body -->
          </div>
          <!-- /.box -->
        </div>
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
<script src="../bower_components/datatables.net/js/jquery.dataTables.min.js"></script>
<script src="../bower_components/datatables.net-bs/js/dataTables.bootstrap.min.js"></script>
<!-- SlimScroll -->
<script src="../bower_components/jquery-slimscroll/jquery.slimscroll.min.js"></script>
<!-- FastClick -->
<script src="../bower_components/fastclick/lib/fastclick.js"></script>
<script type="text/javascript">

  $(function () {
    $('#example1').DataTable()
    $('#example2').DataTable({
      'paging'      : true,
      'lengthChange': false,
      'searching'   : false,
      'ordering'    : true,
      'info'        : true,
      'autoWidth'   : true,
      'scrollX' : true,
    });
  });

  $('#user').siblings('li').removeClass('active');
  var a=document.getElementById('user');
  a.classList.add('active');
  var b=document.getElementById('view_score');
  b.classList.add('active');
</script>