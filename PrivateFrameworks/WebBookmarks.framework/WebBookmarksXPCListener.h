/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class <WebBookmarksXPCConnectionDelegate>, NSMutableArray, NSMutableDictionary, NSObject<OS_xpc_object>, NSString;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {
    NSMutableArray *_clientConnections;
    <WebBookmarksXPCConnectionDelegate> *_delegate;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableDictionary *_messageHandlers;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_handleIncomingConnection:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)dealloc;
- (id)initListenerForMachService:(const char *)arg1 delegate:(id)arg2;
- (void)setHandler:(id)arg1 forMessageNamed:(const char *)arg2;
- (void)setMessageHandlers:(id)arg1;

@end
