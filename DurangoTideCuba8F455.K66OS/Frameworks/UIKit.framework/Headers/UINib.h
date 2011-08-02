/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UINib : NSObject {
@private
	id storage;	// 4 = 0x4
}
@property(assign) BOOL instantiatingForSimulator;	// G=0x3027fed9; S=0x3027feb5; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x3027fefd
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x3027ff41
- (id)initWithBundle:(id)bundle;	// 0x30280289
- (id)initWithContentsOfFile:(id)file;	// 0x3027ff85
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x30280125
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x30280009
- (void)dealloc;	// 0x302801e5
- (void)didReceiveMemoryWarning:(id)warning;	// 0x3027fca9
- (id)effectiveBundle;	// 0x3027fe79
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x302805fd
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x3027fed9
- (id)lazyArchiveData;	// 0x3027fce1
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3027feb5
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x30280431
@end

