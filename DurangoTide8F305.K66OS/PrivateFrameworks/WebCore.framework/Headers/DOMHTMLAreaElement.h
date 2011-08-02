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
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x3167bb69; 
@property(copy) NSString *accessKey;	// G=0x3167a9a5; S=0x3167aaa9; 
@property(copy) NSString *alt;	// G=0x3167a9d9; S=0x3167abcd; 
@property(copy) NSString *coords;	// G=0x3167aa0d; S=0x3167acf1; 
@property(readonly, copy) NSString *hashName;	// G=0x3167b2fd; 
@property(readonly, copy) NSString *host;	// G=0x3167b431; 
@property(readonly, copy) NSString *hostname;	// G=0x3167b565; 
@property(copy) NSString *href;	// G=0x3167b181; S=0x3167ae15; 
@property(assign) BOOL noHref;	// G=0x3167b2bd; S=0x3167b2d9; 
@property(readonly, copy) NSString *pathname;	// G=0x3167b699; 
@property(readonly, copy) NSString *port;	// G=0x3167b7cd; 
@property(readonly, copy) NSString *protocol;	// G=0x3167b901; 
@property(readonly, copy) NSString *search;	// G=0x3167ba35; 
@property(copy) NSString *shape;	// G=0x3167aa41; S=0x3167af39; 
@property(copy) NSString *target;	// G=0x3167aa75; S=0x3167b05d; 
// declared property getter: - (id)absoluteLinkURL;	// 0x3167bb69
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x316a5705
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x316a4f4d
// declared property getter: - (id)accessKey;	// 0x3167a9a5
// declared property getter: - (id)alt;	// 0x3167a9d9
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x316a57b1
- (id)boundingBoxesWithOwner:(id)owner;	// 0x316a4ecd
// declared property getter: - (id)coords;	// 0x3167aa0d
// declared property getter: - (id)hashName;	// 0x3167b2fd
// declared property getter: - (id)host;	// 0x3167b431
// declared property getter: - (id)hostname;	// 0x3167b565
// declared property getter: - (id)href;	// 0x3167b181
// declared property getter: - (BOOL)noHref;	// 0x3167b2bd
// declared property getter: - (id)pathname;	// 0x3167b699
// declared property getter: - (id)port;	// 0x3167b7cd
// declared property getter: - (id)protocol;	// 0x3167b901
// declared property getter: - (id)search;	// 0x3167ba35
// declared property setter: - (void)setAccessKey:(id)key;	// 0x3167aaa9
// declared property setter: - (void)setAlt:(id)alt;	// 0x3167abcd
// declared property setter: - (void)setCoords:(id)coords;	// 0x3167acf1
// declared property setter: - (void)setHref:(id)href;	// 0x3167ae15
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x3167b2d9
// declared property setter: - (void)setShape:(id)shape;	// 0x3167af39
// declared property setter: - (void)setTarget:(id)target;	// 0x3167b05d
// declared property getter: - (id)shape;	// 0x3167aa41
// declared property getter: - (id)target;	// 0x3167aa75
@end
