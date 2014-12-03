var publishMessageToClient;
var publishMessageToChannel;

exports.setup = function (config) {
  publishMessageToClient = config.publishMessageToClient;
  piblishMessageToChannel = config.publishMessageToChannel;
}
