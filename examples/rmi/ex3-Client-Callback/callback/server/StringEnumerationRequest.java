package callback.server;

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface StringEnumerationRequest extends java.rmi.Remote
{
    public boolean hasMoreItems() throws RemoteException;


    public String nextItem() throws RemoteException;
}
