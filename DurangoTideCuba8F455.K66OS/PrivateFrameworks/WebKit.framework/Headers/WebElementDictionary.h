/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSDictionary.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x3050206d
+ (void)initializeLookupTable;	// 0x305021d5
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x30502079
- (id)_absoluteImageURL;	// 0x3051c25d
- (id)_absoluteLinkURL;	// 0x3051bfed
- (id)_altDisplayString;	// 0x3051c4bd
- (id)_domNode;	// 0x3051c5e5
- (void)_fillCache;	// 0x3051c7b5
- (id)_image;	// 0x3051c36d
- (id)_imageRect;	// 0x3051bc0d
- (id)_isContentEditable;	// 0x3051bd19
- (id)_isInScrollBar;	// 0x3051bce1
- (id)_isLiveLink;	// 0x3051bd4d
- (id)_isSelected;	// 0x3051c229
- (id)_spellingToolTip;	// 0x3051c391
- (id)_targetWebFrame;	// 0x3051bfd1
- (id)_textContent;	// 0x3051bd81
- (id)_title;	// 0x3051c0fd
- (id)_titleDisplayString;	// 0x3051bea9
- (id)_webFrame;	// 0x3051bcb1
- (unsigned)count;	// 0x3051bc31
- (void)dealloc;	// 0x30502ce1
- (void)finalize;	// 0x3051c7e5
- (id)keyEnumerator;	// 0x3051bc71
- (id)objectForKey:(id)key;	// 0x3051c5fd
@end

