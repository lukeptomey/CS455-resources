--------
This is a modification of ex1 and demonstrates how to setup a timeout for a RMI call.

The example is adapted from this blog:

http://radykurnia.blogspot.com/2013/08/java-rmi-client-timeout.html

--------

To compile client and server:

make

To run:

Stop already running rmiregistry:

killall -9 rmiregistry

Start up new registry on the server:

export CLASSPATH=$(pwd):$CLASSPATH
rmiregistry <port>

The default port is 1099. That is used if the registry is being shared by various
servers. Otherwise start up a private copy of the registry using your own assigned port and
modify the server and client appropriately.


Then start the server with the appropriate security policy:

java -Djava.security.policy=mysecurity.policy hello.server.HelloServer &

Wait for ready message from the server before running the client. To run the
client, use:


java hello.client.HelloClient hostname [registryPort]

The registryPort is only needed if registry is running on a port other than 1099.

