<?php 
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!=""){
  	require_once('header.php');
    require_once('../../config.php');
    $select="SELECT `cibil_system_user`.* , `cibil_system_bankname`.*, `cibil_system_userscore`.*, `cibil_system_improvement`.* FROM `cibil_system_user` JOIN `cibil_system_bankname` ON `cibil_system_user`.bank_id=`cibil_system_bankname`.id JOIN `cibil_system_userscore` ON `cibil_system_user`.score_id=`cibil_system_userscore`.id JOIN `cibil_system_improvement` ON `cibil_system_user`.id=`cibil_system_improvement`.user_id WHERE `cibil_system_improvement`.status='Pending' OR `cibil_system_improvement`.status='Approved' OR `cibil_system_improvement`.status='Rejected' ORDER BY `cibil_system_user`.update_date DESC";
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
    	padding:10px 20px;
    	margin-bottom: 5px;
      margin-top: 10px;
      margin-right: 5px;
    }

    #example1{
      overflow-x: auto;
    }

    .blocker{
      z-index: 6000!important;
    }

    .updateuser{
      background: #D3DCE3!important;
      overflow: visible;
      max-width:90rem;
    }

    .updateuser .rows{
      margin-bottom: 15px;
    }

    .updateuser label{
      font-size:16px;
      color:black;
    }

    .updateuser .form-control{
      border-color: gray;
    }

    .updateuser h1{
      margin-bottom: 25px;
      color:black; 
      font-weight: bold; 
      text-transform: uppercase; 
      text-align: center;
    }

  </style>

<link rel="stylesheet" href="../bower_components/datatables.net-bs/css/dataTables.bootstrap.min.css">
<link rel="stylesheet" href="../dist/css/AdminLTE.min.css">


  <title>AdminPANEL | Improvement Report</title>
 <!-- Content Wrapper. Contains page content -->
  <div class="content-wrapper">
    <!-- Content Header (Page header) -->
    <section class="content-header">
      <h1>
        Improvement Report
        <small>Control panel</small>
      </h1>
      <ol class="breadcrumb">
        <li><a href="dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
        <li><a href="">Users</a></li>
        <li class="active">Improvement Report</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">

      <!-- Main row -->
      <div class="row">
        <div class="col-xs-12">
          <div class="box">
            <div class="box-header">
              <h3 class="box-title text-bold">USER IMPROVEMENT REPORTS</h3>
            </div>
            <!-- /.box-header -->
            <div class="box-body table-responsive">
              <table id="example1" class="table table-bordered table-striped ">
                <thead>
                <tr>
                  <th width="1%">ID</th>
                  <th width="7%">Name</th>
                  <th width="10%">Bank Name</th>
                  <th width="10%">CC Dues Query</th>
                  <th width="10%">PL Query</th>
                  <th width="10%">CB Query</th>
                  <th width="10%">Scam Query</th>
                  <th width="2%">Score</th>
                  <th width="10%">Improvement</th>
                  <th width="7%">Status</th>
                  <th width="5%">History</th>
                  <th class="text-center" width="1%">Action</th>
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
                  <td><?php echo $res->ccdues_query; ?></td>
                  <td><?php echo $res->pendingloan_query; ?></td>
                  <td><?php echo $res->bouncecheck_query; ?></td>
                  <td><?php echo $res->scam_query; ?></td>
                  <td><?php echo $res->score; ?></td>
                  <td><?php echo $res->improvement; ?></td>
                  <td><?php if($res->status=='Rejected'){
                    echo "<div class='text-bold' style='color: red;'>".$res->status."&nbsp&nbsp<i class='fa fa-times' style='font-size:16px; color:red;'></i></div>";
                  }else if($res->status=='Approved'){
                    echo "<div class='text-success text-bold'>".$res->status."&nbsp&nbsp<i class='fa fa-check' style='font-size:16px; color:green;'></i></div>";
                  }else if($res->status=='Pending'){
                    echo "<div class='text-bold' style='color: #D35400;'>".$res->status."&nbsp&nbsp&nbsp<i class='fa fa-tasks' style='font-size:16px; color:orange;'></i></div>";
                  }?></td>
                  <td class="text-center text-bold"><a class="view_improv" href="#improv-form" rel="modal:open" user_id="<?php echo $res->id; ?>"><i class="fa fa-eye" aria-hidden="true"></i> VIEW</a></td>
                  <td class="text-center" style="font-size:25px;"><a class="edituser" href="#login-form" rel="modal:open" user_id="<?php echo $res->id; ?>"><i class="fa fa-pencil-square" aria-hidden="true"></i></td>
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
                  <th>CC Dues Query</th>
                  <th>PL Query</th>
                  <th>CB Query</th>
                  <th>Scam Query</th>
                  <th>Score</th>
                  <th>Improvement</th>
                  <th>Status</th>
                  <th width="5%">History</th>
                  <th class="text-center">Action</th>
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

  <div class="modal updateuser" id="login-form">
    <h1>Edit User</h1>
    <form action="updateimprovement.php" method="post" id="ajaxuserform">
      <div class="modal-body">
        <div class="row rows">
          <div class="col-xs-6">
            <label for="name">Name : </label>
            <input type="text" class="form-control" id="name" placeholder="Name" name="name" readonly>
          </div>
          <div class="col-xs-6">
            <label for="email">Email : </label>
            <input type="email" class="form-control" id="email" placeholder="Email" name="email" readonly>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-12">
            <label for="improv">Improvement Query : </label><br>
            <input type="text" class="form-control" id="improv" placeholder="Improvement" name="improv" readonly>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label for="ccdues">CC Dues : </label>
            <input type="text" class="form-control" id="ccdues" placeholder="Enter CC Dues (0 or 2)" name="ccdues">
            <div class="ccerror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label for="ccdues_query">CC Dues Query : </label>
            <input type="text" class="form-control" id="ccdues_query" placeholder="Enter CC Dues Query" name="ccdues_query">
            <div class="ccqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label for="pending_loan">Pending Loan : </label>
            <input type="text" class="form-control" id="pending_loan" placeholder="Enter Pending Loan (0 or 1)" name="pending_loan">
            <div class="plerror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label for="pending_loan_query">PL Query : </label>
            <input type="text" class="form-control" id="pending_loan_query" placeholder="Enter PL Query" name="pending_loan_query">
            <div class="plqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label for="check_bounce">Check Bounce : </label>
            <input type="text" class="form-control" id="check_bounce" placeholder="Enter Check Bounce (0 or 1)" name="check_bounce">
            <div class="cberror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label for="check_bounce_query">CB Query : </label>
            <input type="text" class="form-control" id="check_bounce_query" placeholder="Enter CB Query" name="check_bounce_query">
            <div class="cbqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label for="scam">Scam : </label>
            <input type="text" class="form-control" id="scam" placeholder="Enter Scam (0 or 1)" name="scam">
            <div class="serror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label for="scam_query">Scam : </label>
            <input type="text" class="form-control" id="scam_query" placeholder="Enter Scam Query" name="scam_query">
            <div class="sqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows justify-content-center">
          <div class="col-xs-3"></div>
          <div class="col-xs-6">
            <label for="status">Status : </label>
            <select class="form-control" id="status" name="status">
              <option selected disabled>-- Select --</option>
              <option value="Pending">Pending</option>
              <option value="Approved">Approved</option>
              <option value="Rejected">Rejected</option>
            </select>
            <div class="sterror text-danger text-center"></div>
          </div>
          <div class="col-xs-3"></div>
        </div>
        <div class="text-center text-dark">
          <button type="submit" class="btn btn-success" id="ajaxusersubmit">Update</button>
          <a type="reset" href="" class="btn btn-primary">Cancel</a>
        </div>
        <input type="hidden" name="user_id">
      </div>
    </form>
  </div>



  <div class="modal updateuser" id="improv-form">
    <h1>Improvement Update Details</h1>
    <table class="table table-bordered table-striped">
      <thead>
        <th>Sr. No</th>
        <th>Update By</th>
        <th>Status</th>
        <th>Update Date</th>
      </thead>
      <tbody id="updatedata">
      </tbody>
    </table>
  </div>


<?php
	require_once('footer.php');
  }
  else{
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

  $('.edituser').click(function(){
    var user_id=$(this).attr('user_id');
    $.ajax({
      url:'fetch_userdetails.php',
      data:'user_id='+user_id,
      method:'get',
      dataType:'json',
      success:function(response){
        $('input[name="name"]').val(response.name);
        $('input[name="email"]').val(response.email);
        $('input[name="ccdues"]').val(response.ccdues);
        $('input[name="ccdues_query"]').val(response.ccdues_query);
        $('input[name="pending_loan"]').val(response.pending_loan);
        $('input[name="pending_loan_query"]').val(response.pendingloan_query);
        $('input[name="check_bounce"]').val(response.bounce_check);
        $('input[name="check_bounce_query"]').val(response.bouncecheck_query);
        $('input[name="scam"]').val(response.scam);
        $('input[name="scam_query"]').val(response.scam_query);
        $('input[name="improv"]').val(response.improvement);
        $('input[name="user_id"]').val(response.user_id);
        $('select[name="status"]').val(response.status);
      }
    })
  });

  $('.view_improv').click(function(){
    var user_id=$(this).attr('user_id');
    $.ajax({
      url:'fetch_improvdetails.php',
      data:'user_id='+user_id,
      method:'get',
      dataType:'json',
      success:function(response){
        var data_out="";
        var i=1;
        $.each(response,function(key,value){
          data_out+="<tr>";
          data_out+="<td>"+i+++"</td>";
          data_out+="<td>"+value.approved_by+"</td>";
          data_out+="<td>"+value.status+"</td>";
          data_out+="<td>"+value.approval_date+"</td>";
          data_out+="</tr>";
        });
        $('#updatedata').html(data_out);
      }
    })
  });

  $('#user').siblings('li').removeClass('active');
  var a=document.getElementById('user');
  a.classList.add('active');
  var b=document.getElementById('view_improv');
  b.classList.add('active');
</script>

<?php
  if(isset($_GET['success']) && $_GET['success']==1){
?>
<script type="text/javascript">
  swal("", "Improvement Report Updated Successfully!", "success");
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