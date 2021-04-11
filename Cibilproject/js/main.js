(function ($) {
  "use strict";

  // Preloader (if the #preloader div exists)
  $(window).on('load', function () {
    if ($('#preloader').length) {
      $('#preloader').delay(100).fadeOut('slow', function () {
        $(this).remove();
      });
    }
  });

  // Back to top button
  $(window).scroll(function() {
    if ($(this).scrollTop() > 100) {
      $('.back-to-top').fadeIn('slow');
    } else {
      $('.back-to-top').fadeOut('slow');
    }
  });
  $('.back-to-top').click(function(){
    $('html, body').animate({scrollTop : 0},1500, 'easeInOutExpo');
    return false;
  });

  // Initiate the wowjs animation library
  new WOW().init();

  // Header scroll class
  $(window).scroll(function() {
    if ($(this).scrollTop() > 100) {
      $('#header').addClass('header-scrolled');
    } else {
      $('#header').removeClass('header-scrolled');
    }
  });

  if ($(window).scrollTop() > 100) {
    $('#header').addClass('header-scrolled');
  }

  // Smooth scroll for the navigation and links with .scrollto classes
  $('.main-nav a, .mobile-nav a, .scrollto').on('click', function() {
    if (location.pathname.replace(/^\//, '') == this.pathname.replace(/^\//, '') && location.hostname == this.hostname) {
      var target = $(this.hash);
      if (target.length) {
        var top_space = 0;

        if ($('#header').length) {
          top_space = $('#header').outerHeight();

          if (! $('#header').hasClass('header-scrolled')) {
            top_space = top_space - 40;
          }
        }

        $('html, body').animate({
          scrollTop: target.offset().top - top_space
        }, 1500, 'easeInOutExpo');

        if ($(this).parents('.main-nav, .mobile-nav').length) {
          $('.main-nav .active, .mobile-nav .active').removeClass('active');
          $(this).closest('li').addClass('active');
        }

        if ($('body').hasClass('mobile-nav-active')) {
          $('body').removeClass('mobile-nav-active');
          $('.mobile-nav-toggle i').toggleClass('fa-times fa-bars');
          $('.mobile-nav-overly').fadeOut();
        }
        return false;
      }
    }
  });

  // Navigation active state on scroll
  var nav_sections = $('section');
  var main_nav = $('.main-nav, .mobile-nav');
  var main_nav_height = $('#header').outerHeight();

  $(window).on('scroll', function () {
    var cur_pos = $(this).scrollTop();
  
    nav_sections.each(function() {
      var top = $(this).offset().top - main_nav_height,
          bottom = top + $(this).outerHeight();
  
      if (cur_pos >= top && cur_pos <= bottom) {
        main_nav.find('li').removeClass('active');
        main_nav.find('a[href="#'+$(this).attr('id')+'"]').parent('li').addClass('active');
      }
    });
  });

  // jQuery counterUp (used in Whu Us section)
  $('[data-toggle="counter-up"]').counterUp({
    delay: 10,
    time: 1000
  });

  // Testimonials carousel (uses the Owl Carousel library)
  $(".testimonials-carousel").owlCarousel({
    animateOut: 'zoomOut',
    animateIn: 'flipInX',
    stagePadding:30,
    smartSpeed:450,
    autoplay: true,
    dots: false,
    nav:true,
    loop: true,
    items: 1,
    navText: ["<span class='show-for-sr'><img src='img/back.png'></span>","<span class='show-for-sr'><img src='img/forward.png'></span>"]
  });

  // Clients carousel (uses the Owl Carousel library)
  $(".clients-carousel").owlCarousel({
    autoplay: true,
    dots: true,
    loop: true,
    responsive: { 0: { items: 2 }, 768: { items: 4 }, 900: { items: 6 }
    }
  });

})(jQuery);

$('.clear').click(function(){
  $('.usererror').text("");
  $('.passerror').text("");
  $('.corperror').text("");
  $('.corppasserror').text("");
});

$('#submituserform').click(function(event){
    $a=$('#username').val();
    $b=$('#password').val();
    if($a.length<1){
      $('.usererror').text("Please Enter Username");
       event.preventDefault();
    }
    if($b.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    else{
      $('#userlogin').submit();
    }
});

$('#submitcorpform').click(function(event){
    $a=$('#username1').val();
    $b=$('#password1').val();
    if($a.length<1){
       $('.corperror').text("Please Enter Username");
       event.preventDefault();
    }
    if($b.length<1){
       $('.corppasserror').text("Please Enter Password");
       event.preventDefault();
    }
    else{
      $('#corplogin').submit();
    }
});


$('#submituserregister').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $c=$('#username').val();
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    $f=$('#city').val();
    $g=$('#address').val();
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter valid Email");
      event.preventDefault();
    }
    if($c.length<1){
       $('.usererror').text("Enter Username");
       event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($f.length<1){
       $('.cityerror').text("Please Enter City");
       event.preventDefault();
    }
    else if(!$f.match($name_regex)){
      $('.cityerror').text("Please Enter Valid City");
      event.preventDefault();
    }
    if($g.length<1){
       $('.addresserror').text("Please Enter Address");
       event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $d.length>1 && $e.length==10 && $e.match($contact_regex) && $f.length>1 && $f.match($name_regex) && $g.length>1){
      $('#userregister').submit();
    }
});


$('#submitcorpregister').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $c=$('#username').val();
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter valid Email");
      event.preventDefault();
    }
    if($c.length<1){
       $('.usererror').text("Enter Username");
       event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1 && $e.length==10 && $e.match($contact_regex)){
      $('#corpregister').submit();
    }
});

$('#submitpassword').click(function(event){
  $a=$('#password').val();
  $b=$('#repassword').val();
  if($a=='' && $b==''){
    $('.passerror').text("Please Enter Password Fields");
    event.preventDefault();
  }else if($a==$b){
    $('#changepassword').submit();
  }
});

$('#editusersubmit').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    $f=$('#city').val();
    $g=$('#address').val();
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }
    else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter Valid Email");
      event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($f.length<1){
       $('.cityerror').text("Please Enter City");
       event.preventDefault();
    }
    else if(!$f.match($name_regex)){
      $('.cityerror').text("Please Enter Valid City");
      event.preventDefault();
    }
    if($g.length<1){
       $('.addresserror').text("Please Enter Address");
       event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $d.length>1 && $e.length==10 && $e.match($contact_regex) && $f.length>1 && $f.match($name_regex) && $g.length>1){
      $('#edituserform').submit();
    }
});

$('#editcorpsubmit').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $c=$('#username').val();
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter valid Email");
      event.preventDefault();
    }
    if($c.length<1){
       $('.usererror').text("Enter Username");
       event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1 && $e.length==10 && $e.match($contact_regex)){
      $('#editcorpform').submit();
    }
});

$('#addusersubmit').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $c=$('#username').val();
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    $ccdues_regex=/^(0|2)$/;
    $cont_regex=/^[0|1]+$/;
    $f=$('#city').val();
    $g=$('#address').val();
    $h=$('#ccdues').val();
    $i=$('#ccdues_query').val();
    $j=$('#pending_loan').val();
    $k=$('#pending_loan_query').val();
    $l=$('#check_bounce').val();
    $m=$('#check_bounce_query').val();
    $n=$('#scam').val();
    $o=$('#scam_query').val();
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }
    else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter Valid Email");
      event.preventDefault();
    }
    if($c.length<1){
       $('.usererror').text("Please Enter Username");
       event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($f.length<1){
       $('.cityerror').text("Please Enter City");
       event.preventDefault();
    }
    else if(!$f.match($name_regex)){
      $('.cityerror').text("Please Enter Valid City");
      event.preventDefault();
    }
    if($g.length<1){
       $('.addresserror').text("Please Enter Address");
       event.preventDefault();
    }
    if($h.length<1){
       $('.ccerror').text("Please Enter CC Dues");
       event.preventDefault();
    }
    else if(!$h.match($ccdues_regex)){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }else if($h.length>1){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }
    if($i.length<1){
       $('.ccqerror').text("Please Enter CC Dues Remarks");
       event.preventDefault();
    }
    if($j.length<1){
       $('.plerror').text("Please Enter Pending Loan");
       event.preventDefault();
    }
    else if(!$j.match($cont_regex)){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($j.length>1){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($k.length<1){
       $('.plqerror').text("Please Enter PL Remarks");
       event.preventDefault();
    }
    if($l.length<1){
       $('.cberror').text("Please Enter Check Bounce");
       event.preventDefault();
    }
    else if(!$l.match($cont_regex)){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($l.length>1){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($m.length<1){
       $('.cbqerror').text("Please Enter CB Remarks");
       event.preventDefault();
    }
    if($n.length<1){
       $('.serrro').text("Please Enter Scam");
       event.preventDefault();
    }
    else if(!$n.match($cont_regex)){
      $('.serrro').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($n.length>1){
      $('.serrro').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($o.length<1){
       $('.sqerror').text("Please Enter Scam Remarks");
       event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1 && $e.length==10 && $e.match($contact_regex) && $f.length>1 && $f.match($name_regex) && $g.length>1 && $h.length==1 && $h.match($ccdues_regex) && $i.length>1 && $j.length==1 && $j.match($cont_regex) && $k.length>1 && $l.length==1 && $l.match($cont_regex) && $m.length>1 && $n.length==1 && $n.match($cont_regex) && $o.length>1){
      $('#adduserform').submit();
    }
});

$('#edituserbycorpsubmit').click(function(event){
    $a=$('#ccdues').val();
    $b=$('#ccdues_query').val();
    $c=$('#pending_loan').val();
    $d=$('#pending_loan_query').val();
    $e=$('#check_bounce').val();
    $f=$('#check_bounce_query').val();
    $g=$('#scam').val();
    $h=$('#scam_query').val();
    $ccdues_regex=/^(0|2)$/;
    $cont_regex=/^[0|1]+$/;
    if($a.length<1){
       $('.ccerror').text("Please Enter CC Dues");
       event.preventDefault();
    }
    else if(!$a.match($ccdues_regex)){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }else if($a.length>1){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }
    if($b.length<1){
       $('.ccqerror').text("Please Enter CC Dues Remarks");
       event.preventDefault();
    }
    if($c.length<1){
       $('.plerror').text("Please Enter Pending Loan");
       event.preventDefault();
    }
    else if(!$c.match($cont_regex)){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($c.length>1){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($d.length<1){
       $('.plqerror').text("Please Enter PL Remarks");
       event.preventDefault();
    }
    if($e.length<1){
       $('.cberror').text("Please Enter Check Bounce");
       event.preventDefault();
    }
    else if(!$e.match($cont_regex)){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($e.length>1){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($f.length<1){
       $('.cbqerror').text("Please Enter CB Remarks");
       event.preventDefault();
    }
    if($g.length<1){
       $('.serror').text("Please Enter Scam");
       event.preventDefault();
    }
    else if(!$g.match($cont_regex)){
      $('.serror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($g.length>1){
      $('.serror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($h.length<1){
       $('.sqerror').text("Please Enter Scam Remarks");
       event.preventDefault();
    }
    if($a.match($ccdues_regex) && $a.length==1 && $b.length>1 && $c.match($cont_regex) && $c.length==1 && $d.length>1 && $e.length==1 && $e.match($cont_regex) && $f.length>1 && $g.length==1 && $g.match($cont_regex) && $h.length>1){
      $('#edituserbycorp').submit();
    }
});

$('#adminloginsubmit').click(function(event){
  $a=$('#username').val();
  $b=$('#password').val();
  if($a.length<1){
    $('.usererror').text("Please Enter Username");
    event.preventDefault();
  }
  if($b.length<1){
    $('.passerror').text("Please Enter Password");
    event.preventDefault();
  }
  if($a.length>1 && $b.length>1){
    $('#adminloginform').submit();
  }
});

$('#adminregistersubmit').click(function(event){
  $a=$('#name').val();
  $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
  $b=$('#email').val();
  $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
  $c=$('#username').val();
  $d=$('#password').val();
  $e=$('#resetpassword').val();
  if($a.length<1){
    $('.nameerror').text("Please Enter Name");
    event.preventDefault();
  }else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
  }
  if($b.length<1){
    $('.emailerror').text("Please Enter Email");
    event.preventDefault();
  }else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter Valid Email");
      event.preventDefault();
  }
  if($c.length<1){
    $('.usererror').text("Please Enter Username");
    event.preventDefault();
  }
  if($d.length<1){
    $('.passerror').text("Please Enter Password");
    event.preventDefault();
  }
  if($e.length<1){
    $('.repasserror').text("Please Re-Enter Password");
    event.preventDefault();
  }
  if($d!=$e){
    $('.repasserror').text("Passwords Does Not Match");
    event.preventDefault();
  }
  if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1 && $e.length>1 && $d==$e){
    $('#adminregisterform').submit();
  }
});

$('#ajaxusersubmit').click(function(event){
    $a=$('#ccdues').val();
    $b=$('#ccdues_query').val();
    $c=$('#pending_loan').val();
    $d=$('#pending_loan_query').val();
    $e=$('#check_bounce').val();
    $f=$('#check_bounce_query').val();
    $g=$('#scam').val();
    $h=$('#scam_query').val();
    $ccdues_regex=/^(0|2)$/;
    $cont_regex=/^[0|1]+$/;
    $i=$('#status').val();
    if($a.length<1){
       $('.ccerror').text("Please Enter CC Dues");
       event.preventDefault();
    }
    else if(!$a.match($ccdues_regex)){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }else if($a.length>1){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }
    if($b.length<1){
       $('.ccqerror').text("Please Enter CC Dues Remarks");
       event.preventDefault();
    }
    if($c.length<1){
       $('.plerror').text("Please Enter Pending Loan");
       event.preventDefault();
    }
    else if(!$c.match($cont_regex)){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($c.length>1){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($d.length<1){
       $('.plqerror').text("Please Enter PL Remarks");
       event.preventDefault();
    }
    if($e.length<1){
       $('.cberror').text("Please Enter Check Bounce");
       event.preventDefault();
    }
    else if(!$e.match($cont_regex)){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($e.length>1){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($f.length<1){
       $('.cbqerror').text("Please Enter CB Remarks");
       event.preventDefault();
    }
    if($g.length<1){
       $('.serror').text("Please Enter Scam");
       event.preventDefault();
    }
    else if(!$g.match($cont_regex)){
      $('.serror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }else if($g.length>1){
      $('.serror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($h.length<1){
       $('.sqerror').text("Please Enter Scam Remarks");
       event.preventDefault();
    }
    if($i!='Approved' && $i!='Rejected' && $i!='Pending'){
      $('.sterror').text("Please Select Status");
       event.preventDefault();
    }
    if($a.match($ccdues_regex) && $a.length==1 && $b.length>1 && $c.match($cont_regex) && $c.length==1 && $d.length>1 && $e.length==1 && $e.match($cont_regex) && $f.length>1 && $g.length==1 && $g.match($cont_regex) && $h.length>1){
      $('#ajaxuserform').submit();
    }
});

$('#addimprovementsubmit').click(function(event){
  $a=$('#improv').val();
  if($a.length < 1){
    $('.imerror').text("Please Enter Your Improvement Query");
    event.preventDefault();
  }else if($a=="NA" || $a=='na' || $a=="nA" || $a=='Na'){
    $('.imerror').text("Please Enter Valid Improvement Query");
    event.preventDefault();
  }
  if($a.length>1 && $a!="NA" && $a!='na' && $a!="nA" && $a!='Na'){
    $('addimprovementform').submit();
  }
});

$('#adduseradminsubmit').click(function(event){
    $a=$('#name').val();
    $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
    $b=$('#email').val();
    $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    $c=$('#username').val();
    $d=$('#password').val();
    $e=$('#contact').val();
    $contact_regex=/^[0-9]+$/;
    $ccdues_regex=/^(0|2)$/;
    $cont_regex=/^[0|1]+$/;
    $f=$('#city').val();
    $g=$('#address').val();
    $h=$('#ccdues').val();
    $i=$('#ccdues_query').val();
    $j=$('#pending_loan').val();
    $k=$('#pending_loan_query').val();
    $l=$('#check_bounce').val();
    $m=$('#check_bounce_query').val();
    $n=$('#scam').val();
    $o=$('#scam_query').val();
    $p=$('#bank').val();
    if($a.length<1){
       $('.nameerror').text("Please Enter Name");
       event.preventDefault();
    }
    else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
    }
    if($b.length<1){
       $('.emailerror').text("Please Enter Email");
       event.preventDefault();
    }
    else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter Valid Email");
      event.preventDefault();
    }
    if($c.length<1){
       $('.usererror').text("Please Enter Username");
       event.preventDefault();
    }
    if($d.length<1){
       $('.passerror').text("Please Enter Password");
       event.preventDefault();
    }
    if($e.length<1){
       $('.contacterror').text("Please Enter Contact");
       event.preventDefault();
    }
    else if(!$e.match($contact_regex)){
      $('.contacterror').text("Please Enter Valid Contact");
      event.preventDefault();
    }
    else if($e.length<10){
       $('.contacterror').text("Enter 10 Digit Contact");
       event.preventDefault();
    }
    if($f.length<1){
       $('.cityerror').text("Please Enter City");
       event.preventDefault();
    }
    else if(!$f.match($name_regex)){
      $('.cityerror').text("Please Enter Valid City");
      event.preventDefault();
    }
    if($g.length<1){
       $('.addresserror').text("Please Enter Address");
       event.preventDefault();
    }
    if($h.length<1){
       $('.ccerror').text("Please Enter CC Dues");
       event.preventDefault();
    }
    else if(!$h.match($ccdues_regex)){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }else if($h.length>1){
      $('.ccerror').text("Please Enter values 0 or 2");
      event.preventDefault();
    }
    if($i.length<1){
       $('.ccqerror').text("Please Enter CC Dues Remarks");
       event.preventDefault();
    }
    if($j.length<1){
       $('.plerror').text("Please Enter Pending Loan");
       event.preventDefault();
    }
    else if(!$j.match($cont_regex)){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($j.length>1){
      $('.plerror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($k.length<1){
       $('.plqerror').text("Please Enter PL Remarks");
       event.preventDefault();
    }
    if($l.length<1){
       $('.cberror').text("Please Enter Check Bounce");
       event.preventDefault();
    }
    else if(!$l.match($cont_regex)){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($l.length>1){
      $('.cberror').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($m.length<1){
       $('.cbqerror').text("Please Enter CB Remarks");
       event.preventDefault();
    }
    if($n.length<1){
       $('.serrro').text("Please Enter Scam");
       event.preventDefault();
    }
    else if(!$n.match($cont_regex)){
      $('.serrro').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    else if($n.length>1){
      $('.serrro').text("Please Enter values 0 or 1");
      event.preventDefault();
    }
    if($o.length<1){
       $('.sqerror').text("Please Enter Scam Remarks");
       event.preventDefault();
    }
    if($p==null){
      $('.bankerror').text("Please Select Bank");
      event.preventDefault();
    }
    if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1 && $e.length==10 && $e.match($contact_regex) && $f.length>1 && $f.match($name_regex) && $g.length>1 && $h.length==1 && $h.match($ccdues_regex) && $i.length>1 && $j.length==1 && $j.match($cont_regex) && $k.length>1 && $l.length==1 && $l.match($cont_regex) && $m.length>1 && $n.length==1 && $n.match($cont_regex) && $o.length>1 && $p!=null){
      $('#adduseradminform').submit();
    }
});

$('#addsubadminsubmit').click(function(event){
  $a=$('#name').val();
  $name_regex=/^\s*[a-zA-Z,\s]+\s*$/;
  $b=$('#email').val();
  $email_regex = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
  $c=$('#username').val();
  $d=$('#password').val();
  if($a.length<1){
    $('.nameerror').text("Please Enter Name");
    event.preventDefault();
  }else if(!$a.match($name_regex)){
      $('.nameerror').text("Please Enter Valid Name");
      event.preventDefault();
  }
  if($b.length<1){
    $('.emailerror').text("Please Enter Email");
    event.preventDefault();
  }else if(!$b.match($email_regex)){
      $('.emailerror').text("Please Enter Valid Email");
      event.preventDefault();
  }
  if($c.length<1){
    $('.usererror').text("Please Enter Username");
    event.preventDefault();
  }
  if($d.length<1){
    $('.passerror').text("Please Enter Password");
    event.preventDefault();
  }
  if($a.length>1 && $a.match($name_regex) && $b.length>1 && $b.match($email_regex) && $c.length>1 && $d.length>1){
    $('#addsubadminform').submit();
  }
});


function checkpass(event){
  $a=$('#password').val();
  $b=$('#repassword').val();
  if($a!=$b)
  {
    $('.passerror').text("Passwords Does Not Match");
    $('#submitpassword').attr('disabled', 'true');
    $('#submitpassword').css('background-color','gray');    
  }
  else{
    $('.passerror').text("");
    $('#submitpassword').removeAttr('disabled');
    $('#submitpassword').css('background-color','#1bb1dc');
  }
}
