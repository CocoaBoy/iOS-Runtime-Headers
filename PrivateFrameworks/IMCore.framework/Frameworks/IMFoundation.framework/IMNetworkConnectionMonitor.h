/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {
    unsigned int _isConnected : 1;
    unsigned int _isSleeping : 1;
    NSUInteger _hostFlags;
    IMReachability *_hostReachability;
    NSUInteger _ipFlags;
    IMReachability *_ipReachability;
}

- (void)_clearReachability:(id*)arg1 flags:(NSUInteger*)arg2;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (void)_setup;
- (void)dealloc;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (BOOL)isImmediatelyReachable;
- (BOOL)isReachableAfterModemDial;
- (void)reachabilityDidChange:(id)arg1;
- (BOOL)startDialUp;
- (void)systemDidWake;
- (void)systemWillSleep;

@end