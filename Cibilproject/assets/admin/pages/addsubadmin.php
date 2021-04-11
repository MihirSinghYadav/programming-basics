<?php
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
  	require_once('header.php');
    
?>
  
<style type="text/css">
  .content{
    margin-top: 2%;
    width: 50rem;
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

  .rows{
    margin-bottom: 20px;
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
        <li class="active">Add Sub Admin</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">
      <div class="row">
        <div class="col-xs-12">
          <div class="box">
            <div class="box-header text-center">
              <h3 class="box-title text-bold">ADD SUB ADMIN</h3>
            </div>
             
            <div class="box-body">
              <form action="addsubadmindetails.php" method="post" id="addsubadminform">
                  <div class="row rows">
                    <div class="col-xs-12">
                      <label>Name : </label><br>
                      <input type="text" name="name" id="name" class="form-control" placeholder="Enter Full Name">
                      <div class="nameerror text-danger"></div>
                    </div>
                  </div>
                  <div class="row rows">
                    <div class="col-xs-12">
                      <label>Email : </label><br>
                      <input type="email" name="email" class="form-control" id="email" placeholder="Enter Email">
                      <div class="emailerror text-danger"></div>
                    </div>
                  </div>
                  <div class="row rows">
                    <div class="col-xs-12">
                      <label>Username : </label><br>
                      <input type="text" name="username" class="form-control" id="username" placeholder="Enter Username">
                      <div class="usererror text-danger"></div>
                    </div>
                  </div>
                  <div class="row rows">
                    <div class="col-xs-12">
                      <label>Password : </label><br>
                      <input type="password" name="password" class="form-control" id="password" placeholder="Enter Password">
                      <div class="passerror text-danger"></div>
                    </div>
                  </div>
                  <div class="text-dark text-center">
                    <button class="btn btn-success" id="addsubadminsubmit">Add</button>
                    <a type="cancel" href="admin_view.php" class="btn btn-primary">Cancel</a>
                  </div>
              </form>
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
<script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
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
  var b=document.getElementById('sub_admin');
  b.classList.add('active');

  $('#name').keyup(function(){
    $('.nameerror').text("");
  });
  $('#email').keyup(function(){
    $('.emailerror').text("");
  });
  $('#username').keyup(function(){
    $('.usererror').text("");
  });
  $('#password').keyup(function(){
    $('.passerror').text("");
  });
</script>

<?php
  if(isset($_GET['error']) && $_GET['error']==1){
?>
<script type="text/javascript">
  swal("", "Username Already Exists!", "error");
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