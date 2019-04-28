(function() {
  // control state PHPのURL
  var PHP_URL = "http://iotdevice.php.xdomain.jp/controlState.php";
  // get temperature PHPのURL
  var temp_PHP_URL = "http://iotdevice.php.xdomain.jp/getTemp.php";
  // ボタン
  var btn;

  // get current temperature
  var count = 0;
  var countup = function(){
    console.log(count++);
    getTemp();
    } 
  setInterval(countup, 1000);
  
  $(function() {
    btn = $("#btn");
    btn.on("click", clickHandler);

    // LEDをOFFにする
    //ledSet("OFF");
  });

  /**
   * Click Handler
   */
  function clickHandler() {
    // ON -> OFF
    if(btn.attr("class") == "on") {
      btn.attr("class", "off");
      btn.text("OFF");
      controlState("OFF");
    }
    // OFF -> ON
    else {
      btn.attr("class", "on");
      btn.text("ON");
      controlState("ON");
    }
  }

  /**
   * PHPにLEDの状態を送信します
   * @param	state	0:OFF, 1:ON
   */
  function controlState(state) {
    $.ajax({
      url: PHP_URL,
      type: "post",
      dataType: "json",
      data: {
        state: state
      }
    })
  }



  function getTemp() {
    $.ajax({
      url: temp_PHP_URL,
      type: "get"
    })
    .done(function(data, textStatus, jqXHR){
      // Success
      //alert(data);
      $("#temperature").html(JSON.stringify(data));
    })
    .fail(function(jqXHR, textStatus, errorThrown){
      alert("getting temperature failed");
      $("#temperature").html(JSON.stringify(data));
    });

  }
  
})();