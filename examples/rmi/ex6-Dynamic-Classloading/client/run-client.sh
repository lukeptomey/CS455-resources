
# Use this below to enable automagical loading of MyCalculation.class file to 
# the server without the server having to store it. Note that we are assuming
# that the ex6 folder lives on a machine with a web server running and that
# the path to ex6 is as shown below (and is accessible via the web server)
# Note that the / at the end of the URL is required.

java -Djava.rmi.server.codebase="http://cs.boisestate.edu/~amit/teaching/555/rmi/ex6-Dynamic-Classloading/client/" -Djava.security.policy=mysecurity.policy  MyClient onyx 

