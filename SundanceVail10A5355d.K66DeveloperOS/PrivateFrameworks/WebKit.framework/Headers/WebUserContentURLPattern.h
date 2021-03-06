/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x316f4c59
- (void)dealloc;	// 0x316f4e3d
- (id)host;	// 0x316f4ee9
- (BOOL)isValid;	// 0x316f4e8d
- (BOOL)matchesSubdomains;	// 0x316f4f1d
- (BOOL)matchesURL:(id)url;	// 0x316f4f41
- (id)scheme;	// 0x316f4eb5
@end

