/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface AccessibilityTextMarker : NSObject {
@private
	TextMarkerData _textMarkerData;	// 4 = 0x4
}
+ (id)textMarkerWithVisiblePosition:(VisiblePosition *)visiblePosition;	// 0x315fde4d
- (id)initWithData:(id)data;	// 0x315fdf25
- (id)initWithTextMarker:(TextMarkerData *)textMarker;	// 0x315fddfd
- (id)dataRepresentation;	// 0x315fdef1
- (id)description;	// 0x315fde99
- (VisiblePosition)visiblePosition;	// 0x315fded9
@end

