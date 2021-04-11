<?php
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
  	require_once('header.php');
    require_once('../../config.php');
    $select="SELECT cibil_system_admin.* , cibil_system_login.* FROM `cibil_system_admin` JOIN `cibil_system_login` ON cibil_system_admin.login_id=cibil_system_login.id WHERE cibil_system_login.role='admin' OR cibil_system_login.role='sub-admin'";
    $query=mysqli_query($conn,$select);
?>
  
<style type="text/css">
  .content{
    margin-top: 2%;
  }
  .catsuccess{
    color:green;
  }
  .catsuccess1{
    color:red;
  }
  .btn{
  	padding:2px 10px;
  	margin-bottom: 5px;
  }
  #inputcat, #inputEmail3{
    display: inline;
    width:70%;
  }
  .modalcenter{
  	top:30%;
  	transform: translate(-30%);
  }
</style>

<link rel="stylesheet" href="../bower_components/datatables.net-bs/css/dataTables.bootstrap.min.css">
<link rel="stylesheet" href="../dist/css/AdminLTE.min.css">


  <title>AdminPANEL | View Admin</title>

  <!-- Content Wrapper. Contains page content -->
  <div class="content-wrapper">
    <!-- Content Header (Page header) -->
    <section class="content-header">
      <h1>
        Admin
        <small>Control panel</small>
      </h1>
      <ol class="breadcrumb">
        <li><a href="dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
        <li><a href="">Admin</a></li>
        <li class="active">View Admin</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">
      <div class="row">
        <div class="col-xs-12">
          <div class="box">
            <div class="box-header">
              <h3 class="box-title text-bold">ADMIN DETAILS</h3>
            </div>
            <!-- /.box-header -->
            <div class="box-body">
              <table id="example1" class="table table-bordered table-striped">
                <thead>
                <tr>
                  <th>Sr. No</th>
                  <th>Admin Name</th>
                  <th>Email</th>
                  <th>Role</th>
                  <th>Register Date</th>
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
                  <td><?php echo $res->email; ?></td>
                  <td><?php echo $res->role; ?></td>
                  <td><?php echo $res->register_date; ?></td>
                </tr>
                <?php
                  }
                ?>
                </tbody>
                <tfoot>
                <tr>
                  <th>Sr. No</th>
                  <th>Admin Name</th>
                  <th>Email</th>
                  <th>Role</th>
                  <th>Register Date</th>
                </tr>
                </tfoot>
              </table>
            </div>
            <!-- /.box-body -->
          </div>
          <!-- /.box -->
        </div>
        
      </div>
      <!-- /.row -->
    </section>
  <!-- /.content-wrapper -->
</div>


<?php
	require_once('footer.php');
  }
  else if($_SESSION['admin_role']=='sub-admin'){
    header('Location:userimprovement.php');
  }else{
    require_once('error.php');
  }
?>

<!-- DataTables -->
<script src="../bower_components/datatables.net/js/jquery.dataTables.min.js"></script>
<script src="../bower_components/datatables.net-bs/js/dataTables.bootstrap.min.js"></script>
<!-- SlimScroll -->
<script src="../bower_components/jquery-slimscroll/jquery.slimscroll.min.js"></script>
<!-- FastClick -->
<script src="../bower_components/fastclick/lib/fastclick.js"></script>
<script type="text/javascript">
  $(document).ready(function(){
    $('.edit_cat').click(function(){
      var cat_id=$(this).attr('user_id');
      $.ajax({
        url:'edit_cat.php',
        data:'cat_id='+cat_id,
        dataType:'json',
        method:'get',
        success:function(response){
          $('input[name="inputcat"]').val(response.name);
          $('input[name="catid"').val(response.id);
        }
      })
    });
  })

  $(function () {
    $('#example1').DataTable()
    $('#example2').DataTable({
      'paging'      : true,
      'lengthChange': false,
      'searching'   : false,
      'ordering'    : true,
      'info'        : true,
      'autoWidth'   : false
    })
  })
	$('#admin').siblings('li').removeClass('active');
	var a=document.getElementById('admin');
	a.classList.add('active');

</script>

<?php
  if(isset($_GET['success']) && $_GET['success']==1){
?>
<script type="text/javascript">
  swal("", "Sub Admin Added Successfully!", "success");
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