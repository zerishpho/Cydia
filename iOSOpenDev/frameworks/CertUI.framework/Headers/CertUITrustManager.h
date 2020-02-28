/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <CertUI/CertUITrustManager.h>

#import <CertUI/CertUI-Structs.h>

@class NSString;

@interface CertUITrustManager : NSObject {
	NSString *_access;	// 4 = 0x4
}
+ (id)defaultTrustManager;	// 0x17c9
- (void)removeAllTrusts;	// 0x2109
- (void)removeSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x208d
- (void)removeSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x1f91
- (void)addSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x1f01
- (void)addSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x1d39
- (int)actionForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x1c39
- (int)actionForSSLTrust:(SecTrust *)ssltrust hostname:(id)hostname service:(id)service;	// 0x1939
- (int)_actionForTrust:(SecTrust *)trust exceptions:(id)exceptions;	// 0x18e9
- (void)dealloc;	// 0x189d
- (id)init;	// 0x1889
- (id)initWithAccessGroup:(id)accessGroup;	// 0x1835
@end

@interface CertUITrustManager (Deprecated)
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x2201
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x21f1
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x21e1
@end

@interface CertUITrustManager (SMIMEExtensions)
- (BOOL)_hasExceptionsForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x2211
@end

@interface CertUITrustManager (Migration)
+ (void)migrateFromVersionOne;	// 0x2699
+ (void)migrateFromVersionZero;	// 0x2659
+ (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x2349
@end