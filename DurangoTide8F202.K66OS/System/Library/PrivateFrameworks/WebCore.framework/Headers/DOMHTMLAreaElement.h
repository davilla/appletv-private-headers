/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSURL, NSString;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x33f86b69; 
@property(copy) NSString *accessKey;	// G=0x33f859a5; S=0x33f85aa9; 
@property(copy) NSString *alt;	// G=0x33f859d9; S=0x33f85bcd; 
@property(copy) NSString *coords;	// G=0x33f85a0d; S=0x33f85cf1; 
@property(readonly, copy) NSString *hashName;	// G=0x33f862fd; 
@property(readonly, copy) NSString *host;	// G=0x33f86431; 
@property(readonly, copy) NSString *hostname;	// G=0x33f86565; 
@property(copy) NSString *href;	// G=0x33f86181; S=0x33f85e15; 
@property(assign) BOOL noHref;	// G=0x33f862bd; S=0x33f862d9; 
@property(readonly, copy) NSString *pathname;	// G=0x33f86699; 
@property(readonly, copy) NSString *port;	// G=0x33f867cd; 
@property(readonly, copy) NSString *protocol;	// G=0x33f86901; 
@property(readonly, copy) NSString *search;	// G=0x33f86a35; 
@property(copy) NSString *shape;	// G=0x33f85a41; S=0x33f85f39; 
@property(copy) NSString *target;	// G=0x33f85a75; S=0x33f8605d; 
// declared property getter: - (id)absoluteLinkURL;	// 0x33f86b69
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x33fb0705
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x33faff4d
// declared property getter: - (id)accessKey;	// 0x33f859a5
// declared property getter: - (id)alt;	// 0x33f859d9
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x33fb07b1
- (id)boundingBoxesWithOwner:(id)owner;	// 0x33fafecd
// declared property getter: - (id)coords;	// 0x33f85a0d
// declared property getter: - (id)hashName;	// 0x33f862fd
// declared property getter: - (id)host;	// 0x33f86431
// declared property getter: - (id)hostname;	// 0x33f86565
// declared property getter: - (id)href;	// 0x33f86181
// declared property getter: - (BOOL)noHref;	// 0x33f862bd
// declared property getter: - (id)pathname;	// 0x33f86699
// declared property getter: - (id)port;	// 0x33f867cd
// declared property getter: - (id)protocol;	// 0x33f86901
// declared property getter: - (id)search;	// 0x33f86a35
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33f85aa9
// declared property setter: - (void)setAlt:(id)alt;	// 0x33f85bcd
// declared property setter: - (void)setCoords:(id)coords;	// 0x33f85cf1
// declared property setter: - (void)setHref:(id)href;	// 0x33f85e15
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x33f862d9
// declared property setter: - (void)setShape:(id)shape;	// 0x33f85f39
// declared property setter: - (void)setTarget:(id)target;	// 0x33f8605d
// declared property getter: - (id)shape;	// 0x33f85a41
// declared property getter: - (id)target;	// 0x33f85a75
@end
