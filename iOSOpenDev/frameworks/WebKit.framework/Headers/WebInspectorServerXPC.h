/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebInspectorServer.h>
#import <WebKit/WebInspectorClientRegistryDelegate.h>
#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/WebKit-Structs.h>

@class WebInspectorXPCWrapper, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebInspectorServerXPC : XXUnknownSuperclass <WebInspectorServer, WebInspectorClientRegistryDelegate> {
@private
	BOOL _isEnabled;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
	WebInspectorXPCWrapper *_xpcConnection;	// 12 = 0xc
	NSMutableDictionary *_openConnections;	// 16 = 0x10
}
@property(readonly, assign) BOOL isEnabled;	// G=0x10449; converted property
@property(readonly, retain) WebInspectorXPCWrapper *xpcConnection;	// G=0x8fd01; converted property
- (id)init;	// 0x103d5
- (void)start;	// 0x90229
- (void)stop;	// 0x90199
// converted property getter: - (BOOL)isEnabled;	// 0x10449
// converted property getter: - (id)xpcConnection;	// 0x8fd01
- (void)setupXPCConnectionIfNeeded;	// 0x900e1
- (void)connectionClosing:(id)closing;	// 0x9009d
- (void)closeAllConnections;	// 0x8ffc5
- (void)pushListing;	// 0x1cfe1
- (void)_receivedSetup:(id)setup;	// 0x8feb9
- (void)_receivedData:(id)data;	// 0x8fe61
- (void)_receivedDidClose:(id)_received;	// 0x8fde9
- (void)_receivedGetListing:(id)listing;	// 0x8fdd9
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x8fd79
- (void)xpcConnectionFailed:(id)failed;	// 0x8fd21
- (void)didRegisterClient:(WebInspectorClient *)client;	// 0x2d785
- (void)didUnregisterClient:(WebInspectorClient *)client;	// 0x8fd11
@end