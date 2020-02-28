/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaEntityCellConfiguration.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSString;

@interface IUGroupCellConfiguration : IUMediaEntityCellConfiguration {
	int _groupingType;	// 100 = 0x64
	unsigned _entityIndex;	// 104 = 0x68
	NSString *_subtitleProperty;	// 108 = 0x6c
@private
	NSString *_subtitleMediaItemProperty;	// 112 = 0x70
}
@property(copy, nonatomic) NSString *subtitleMediaItemProperty;	// G=0x21b25; S=0x21b35; @synthesize=_subtitleMediaItemProperty
+ (float)rowHeightForGlobalContext:(id)globalContext;	// 0x20e8d
// declared property setter: - (void)setSubtitleMediaItemProperty:(id)property;	// 0x21b35
// declared property getter: - (id)subtitleMediaItemProperty;	// 0x21b25
- (void)reloadStrings;	// 0x21679
- (id)untruncationCalloutString;	// 0x215d9
- (void)reloadImages;	// 0x212a1
- (void)invalidateDynamicTrackCaches;	// 0x21239
- (void)reloadLayoutInformation;	// 0x20fa1
- (void)configureForEntity:(id)entity query:(id)query entityIndex:(unsigned)index entityCount:(unsigned)count;	// 0x20f29
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x20ef5
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x20ea1
- (CGSize)artworkSize;	// 0x20e95
- (void)dealloc;	// 0x20e41
- (id)init;	// 0x20e11
@end