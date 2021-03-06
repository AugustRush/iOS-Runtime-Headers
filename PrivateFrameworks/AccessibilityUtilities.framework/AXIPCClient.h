/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSLock, NSMutableArray, NSString;

@interface AXIPCClient : NSObject {
    unsigned int _assignedServerMachPort;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource { } *_clientSource;
    BOOL _connected;
    unsigned int _connectionAttempts;
    AXAccessQueue *_connectionQueue;
    int _pid;
    AXAccessQueue *_portDeathAccessQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _portDeathHandler;

    NSMutableArray *_postConnectionTasks;
    struct __CFMachPort { } *_serverPort;
    NSLock *_serverPortLock;
    NSString *_serviceName;
    float _timeout;
    BOOL _usesPerPidLookup;
    unsigned int clientCallbackPort;
    struct __CFRunLoopSource { } *clientCallbackSource;
    BOOL shouldRegisterCallbackSourceOnMainRunloop;
}

@property(readonly) unsigned int clientCallbackPort;
@property(readonly) struct __CFRunLoopSource { }* clientCallbackSource;
@property(copy) NSString * clientIdentifier;
@property(getter=isConnected) BOOL connected;
@property(retain) AXAccessQueue * connectionQueue;
@property int pid;
@property(retain) AXAccessQueue * portDeathAccessQueue;
@property(copy) id portDeathHandler;
@property(retain) NSMutableArray * postConnectionTasks;
@property struct __CFMachPort { }* serverPort;
@property(readonly) unsigned int serviceMachPort;
@property(copy) NSString * serviceName;
@property BOOL shouldRegisterCallbackSourceOnMainRunloop;
@property float timeout;
@property BOOL usesPerPidLookup;

+ (id)allClients;
+ (void)initialize;

- (void)_attemptToEstablishConnection;
- (void)_commonInit;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2;
- (void)_registerWithServer;
- (void)_serverDied;
- (BOOL)_verifyConnectionWithError:(id*)arg1;
- (unsigned int)clientCallbackPort;
- (struct __CFRunLoopSource { }*)clientCallbackSource;
- (id)clientIdentifier;
- (BOOL)connectWithError:(id*)arg1;
- (id)connectionQueue;
- (void)dealloc;
- (id)description;
- (BOOL)disconnectWithError:(id*)arg1;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(id)arg2;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (BOOL)isConnected;
- (int)pid;
- (id)portDeathAccessQueue;
- (id)portDeathHandler;
- (id)postConnectionTasks;
- (id)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)sendSimpleMessage:(id)arg1 withError:(id*)arg2;
- (struct __CFMachPort { }*)serverPort;
- (unsigned int)serviceMachPort;
- (id)serviceName;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPortDeathAccessQueue:(id)arg1;
- (void)setPortDeathHandler:(id)arg1;
- (void)setPostConnectionTasks:(id)arg1;
- (void)setServerPort:(struct __CFMachPort { }*)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldRegisterCallbackSourceOnMainRunloop:(BOOL)arg1;
- (void)setTimeout:(float)arg1;
- (void)setUsesPerPidLookup:(BOOL)arg1;
- (BOOL)shouldRegisterCallbackSourceOnMainRunloop;
- (float)timeout;
- (BOOL)usesPerPidLookup;
- (BOOL)verifyConnectionExists;

@end
