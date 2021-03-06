/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class DOMHTMLCollection, DOMElement, NSString;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, retain) DOMElement *activeElement;	// G=0x31bec2c1; 
@property(copy) NSString *alinkColor;	// G=0x31bec88d; S=0x31bec9d9; 
@property(copy) NSString *bgColor;	// G=0x31bec385; S=0x31bec4d1; 
@property(readonly, copy) NSString *compatMode;	// G=0x31bec175; 
@property(copy) NSString *designMode;	// G=0x31bebef1; S=0x31bec03d; 
@property(copy) NSString *dir;	// G=0x31bebc6d; S=0x31bebdb9; 
@property(readonly, retain) DOMHTMLCollection *embeds;	// G=0x31beb71d; 
@property(copy) NSString *fgColor;	// G=0x31bec609; S=0x31bec755; 
@property(readonly, assign) int height;	// G=0x31bebbb1; 
@property(copy) NSString *linkColor;	// G=0x31becb11; S=0x31becc5d; 
@property(readonly, retain) DOMHTMLCollection *plugins;	// G=0x31beb865; 
@property(readonly, retain) DOMHTMLCollection *scripts;	// G=0x31beb9ad; 
@property(copy) NSString *vlinkColor;	// G=0x31becd95; S=0x31becee1; 
@property(readonly, assign) int width;	// G=0x31bebaf5; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x31be10c9
- (id)_createDocumentFragmentWithText:(id)text;	// 0x31be0e55
// declared property getter: - (id)activeElement;	// 0x31bec2c1
// declared property getter: - (id)alinkColor;	// 0x31bec88d
// declared property getter: - (id)bgColor;	// 0x31bec385
- (void)captureEvents;	// 0x31bed4b5
- (void)clear;	// 0x31bed3fd
- (void)close;	// 0x31bed0d5
// declared property getter: - (id)compatMode;	// 0x31bec175
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x31b3bdb1
- (id)createDocumentFragmentWithText:(id)text;	// 0x31be0ed5
// declared property getter: - (id)designMode;	// 0x31bebef1
// declared property getter: - (id)dir;	// 0x31bebc6d
// declared property getter: - (id)embeds;	// 0x31beb71d
// declared property getter: - (id)fgColor;	// 0x31bec609
- (BOOL)hasFocus;	// 0x31bed625
// declared property getter: - (int)height;	// 0x31bebbb1
// declared property getter: - (id)linkColor;	// 0x31becb11
- (void)open;	// 0x31bed019
// declared property getter: - (id)plugins;	// 0x31beb865
- (void)releaseEvents;	// 0x31bed56d
// declared property getter: - (id)scripts;	// 0x31beb9ad
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x31bec9d9
// declared property setter: - (void)setBgColor:(id)color;	// 0x31bec4d1
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x31bec03d
// declared property setter: - (void)setDir:(id)dir;	// 0x31bebdb9
// declared property setter: - (void)setFgColor:(id)color;	// 0x31bec755
// declared property setter: - (void)setLinkColor:(id)color;	// 0x31becc5d
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x31becee1
// declared property getter: - (id)vlinkColor;	// 0x31becd95
// declared property getter: - (int)width;	// 0x31bebaf5
- (void)write:(id)write;	// 0x31bed18d
- (void)writeln:(id)writeln;	// 0x31bed2c5
@end

