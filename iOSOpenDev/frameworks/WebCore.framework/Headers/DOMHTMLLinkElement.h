/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>
#import <WebCore/DOMHTMLLinkElement.h>

@class NSURL, DOMStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLLinkElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x328e91; 
@property(readonly, retain) DOMStyleSheet *sheet;	// G=0x328dcd; 
@property(copy) NSString *type;	// G=0x328175; S=0x328b31; 
@property(copy) NSString *target;	// G=0x328095; S=0x3289ed; 
@property(copy) NSString *rev;	// G=0x327fb5; S=0x3288a9; 
@property(copy) NSString *rel;	// G=0x327ed5; S=0x328765; 
@property(copy) NSString *media;	// G=0x327df5; S=0x328621; 
@property(copy) NSString *hreflang;	// G=0x327d15; S=0x3284dd; 
@property(copy) NSString *href;	// G=0x328c75; S=0x328399; 
@property(copy) NSString *charset;	// G=0x327c35; S=0x328255; 
@property(assign) BOOL disabled;	// G=0x327aa9; S=0x327b69; 
// declared property getter: - (BOOL)disabled;	// 0x327aa9
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x327b69
// declared property getter: - (id)charset;	// 0x327c35
// declared property setter: - (void)setCharset:(id)charset;	// 0x328255
// declared property getter: - (id)href;	// 0x328c75
// declared property setter: - (void)setHref:(id)href;	// 0x328399
// declared property getter: - (id)hreflang;	// 0x327d15
// declared property setter: - (void)setHreflang:(id)hreflang;	// 0x3284dd
// declared property getter: - (id)media;	// 0x327df5
// declared property setter: - (void)setMedia:(id)media;	// 0x328621
// declared property getter: - (id)rel;	// 0x327ed5
// declared property setter: - (void)setRel:(id)rel;	// 0x328765
// declared property getter: - (id)rev;	// 0x327fb5
// declared property setter: - (void)setRev:(id)rev;	// 0x3288a9
// declared property getter: - (id)target;	// 0x328095
// declared property setter: - (void)setTarget:(id)target;	// 0x3289ed
// declared property getter: - (id)type;	// 0x328175
// declared property setter: - (void)setType:(id)type;	// 0x328b31
// declared property getter: - (id)sheet;	// 0x328dcd
// declared property getter: - (id)absoluteLinkURL;	// 0x328e91
@end

@interface DOMHTMLLinkElement (WebPrivate)
- (BOOL)_mediaQueryMatchesForOrientation:(int)orientation;	// 0x2ee74d
- (BOOL)_mediaQueryMatches;	// 0x2ee7f1
@end