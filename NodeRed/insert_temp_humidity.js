// INSERT INTO weather (temperature, humidity, date) VALUES (20.2, 60, datetime("now"))
var sensor_id = 1;
var temperature = msg.payload;
var humidity = msg.humidity;
var sql_command ="(" + temperature + ", " + humidity + ", " + sensor_id + ", datetime('now'))";
var topic = "INSERT INTO weather (temperature, humidity, sensor, date) VALUES " + sql_command;
var msg1 = {};
msg1.topic = topic;
return msg1;