/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x36498049
+ (void)initializeLookupTable;	// 0x36498171
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x3649804d
- (id)_absoluteImageURL;	// 0x364b5855
- (id)_absoluteLinkURL;	// 0x364b551d
- (id)_absoluteMediaURL;	// 0x364b5765
- (id)_altDisplayString;	// 0x364b5a89
- (id)_domNode;	// 0x364b5ba5
- (void)_fillCache;	// 0x364b5da9
- (id)_image;	// 0x364b5945
- (id)_imageRect;	// 0x364b5129
- (id)_isContentEditable;	// 0x364b524d
- (id)_isInScrollBar;	// 0x364b5215
- (id)_isLiveLink;	// 0x364b5289
- (id)_isSelected;	// 0x364b5729
- (id)_spellingToolTip;	// 0x364b596d
- (id)_targetWebFrame;	// 0x364b54fd
- (id)_textContent;	// 0x364b52c5
- (id)_title;	// 0x364b560d
- (id)_titleDisplayString;	// 0x364b53e1
- (id)_webFrame;	// 0x364b51dd
- (unsigned)count;	// 0x364b5145
- (void)dealloc;	// 0x36498641
- (void)finalize;	// 0x364b5ddd
- (id)keyEnumerator;	// 0x364b5191
- (id)objectForKey:(id)key;	// 0x364b5bb9
@end

