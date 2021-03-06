<?php

function _valid($input) {
    if ($input == null) return false;
    if (!isset($input)) return false;

    return true;
}
function _messaging_am_sms_name($message, $name) {

    if (strlen($message) > 1200) {
      $message = str_replace("_msg_",$message,variable_get('sms_long_notification'));
      $message = str_replace("_name_",$name,$message);
    } else {
      $message = str_replace("_msg_",$message,variable_get('sms_notification'));
      $message = str_replace("_name_",$name,$message);
    }

    return $message;
}
function _messaging_am_sms($subject, $message, $from, $from_name, $to) {

    if (!_valid($to)) return;
    if (!_valid($from)) return;
    if (!_valid($subject)) return;
    if (!_valid($message)) return;

    $message = _messaging_am_sms_name($message, $from_name);

    $file = getcwd() . '/sites/all/libraries/twilio/Twilio.php';
    if (!is_file($file)) return false;

    require_once $file;

    $sid = variable_get('twilio_sid');
    $token = variable_get('twilio_auth_token');

    $client = new services_twilio($sid, $token);
    foreach ($to as $phone) {
      $sms = $client->account->sms_messages->create(
          variable_get('twilio_number'),
          $phone,
          $message
      );

      if($sms->sid > 0)
        watchdog("SMS failure", "<pre>" . print_r($sms->sid, 1) . "</pre>"); 
    }
}
