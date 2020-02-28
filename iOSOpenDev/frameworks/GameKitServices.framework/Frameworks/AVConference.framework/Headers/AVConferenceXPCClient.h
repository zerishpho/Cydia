/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVConferenceXPCClient : XXUnknownSuperclass {
@private
	xpc_connection_s *connection;	// 4 = 0x4
	dispatch_semaphore_s *sConnection;	// 8 = 0x8
	NSMutableDictionary *registeredBlocks;	// 12 = 0xc
	dispatch_queue_s *requestQueue;	// 16 = 0x10
	dispatch_queue_s *replyQueue;	// 20 = 0x14
}
@property(readonly, assign) xpc_connection_s *connection;	// G=0x99c21; @synthesize
@property(readonly, assign) NSMutableDictionary *registeredBlocks;	// G=0x99c11; @synthesize
+ (id)AVConferenceXPCClientSingleton;	// 0x99ce9
- (id)init;	// 0x99c31
- (void)dealloc;	// 0x9a5c9
- (id)allocWithZone:(NSZone *)zone;	// 0x99be9
- (id)copyWithZone:(NSZone *)zone;	// 0x99bf9
- (id)retain;	// 0x99bfd
- (unsigned)retainCount;	// 0x99c01
- (oneway void)release;	// 0x99c09
- (id)autorelease;	// 0x99c0d
- (id)createNSDictionaryFromXPCDictionary:(void *)xpcdictionary;	// 0x9a50d
- (void *)createXPCDictionaryFromNSDictionary:(id)nsdictionary;	// 0x9a431
- (id)createServerDiedDictionary;	// 0x9a3c9
- (void)closeConnectionToServer;	// 0x9a345
- (void)createConnectionToServer;	// 0x9a289
- (void)sendMessageAsync:(char *)async arguments:(id)arguments reply:(id)reply;	// 0x9a0e5
- (void)registerBlockForService:(char *)service block:(id)block;	// 0x99f45
- (void)deregisterFromService:(char *)service;	// 0x99de9
// declared property getter: - (id)registeredBlocks;	// 0x99c11
// declared property getter: - (xpc_connection_s *)connection;	// 0x99c21
@end