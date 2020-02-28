/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (SBUtilities)
+ (void)killSounds;	// 0x4e25
- (BOOL)playSound;	// 0x4d89
- (void)killSound;	// 0x4dc1
- (id)defaultLaunchBlockWithOrigin:(int)origin;	// 0x517d
- (id)launchBlockForButtonIndex:(unsigned)buttonIndex withOrigin:(int)origin;	// 0x51dd
- (id)defaultLaunchBlock;	// 0x4dfd
- (id)launchBlockForButtonIndex:(unsigned)buttonIndex;	// 0x4e11
@end

@interface XXUnknownSuperclass (SBUIAdditions)
- (void)sbui_drawEagerly;	// 0x528d
@end