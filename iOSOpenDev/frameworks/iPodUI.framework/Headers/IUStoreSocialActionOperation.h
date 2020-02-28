/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class NSString, NSDictionary, NSHTTPURLResponse;

@interface IUStoreSocialActionOperation : XXUnknownSuperclass {
	NSString *_actionType;	// 60 = 0x3c
	unsigned long long _itemIdentifier;	// 64 = 0x40
	NSDictionary *_responseDictionary;	// 72 = 0x48
	NSHTTPURLResponse *_urlResponse;	// 76 = 0x4c
}
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x62a55; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x629bd; 
@property(readonly, assign) NSString *socialActionType;	// G=0x62a1d; 
@property(readonly, assign) unsigned long long itemIdentifier;	// G=0x629a5; 
- (void)_setURLResponse:(id)response;	// 0x62e25
- (void)_setResponseDictionary:(id)dictionary;	// 0x62dbd
- (BOOL)_runWithActionURL:(id)actionURL error:(id *)error;	// 0x62bd1
- (void)run;	// 0x62ab5
// declared property getter: - (id)URLResponse;	// 0x62a55
// declared property getter: - (id)socialActionType;	// 0x62a1d
// declared property getter: - (id)responseDictionary;	// 0x629bd
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x629a5
- (void)dealloc;	// 0x62931
- (id)initWithSocialActionType:(id)socialActionType itemIdentifier:(unsigned long long)identifier;	// 0x62841
- (id)init;	// 0x6281d
@end