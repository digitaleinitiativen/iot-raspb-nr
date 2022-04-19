// INSERT INTO waterlevel(waterlevel, sensor, date) VALUES (18, 2, datetime("now"));
var sensor_id = 2;
var water_level = msg.payload;
var sql_command ="(" + water_level + ", " + sensor_id + ", datetime('now'))";
var topic = "INSERT INTO waterlevel (waterlevel, sensor, date) VALUES " + sql_command;
var msg1 = {};
msg1.topic = topic;
return msg1;