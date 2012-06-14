/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADProperties : NSObject {
@private
	OADProperties *mParent;	// 4 = 0x4
	unsigned mIsMerged : 1;	// 8 = 0x8
	unsigned mIsMergedWithParent : 1;	// 8 = 0x8
}
@property(assign, getter=isMerged) BOOL merged;	// G=0x343f9819; S=0x343f9851; converted property
@property(assign, getter=isMergedWithParent) BOOL mergedWithParent;	// G=0x343f9835; S=0x343f986d; converted property
@property(retain) id parent;	// G=0x343f9809; S=0x3437e521; converted property
+ (id)defaultProperties;	// 0x343f3b59
- (id)init;	// 0x3437e2e1
- (id)initWithDefaults;	// 0x3441f49d
- (void)dealloc;	// 0x343f6381
- (void)flatten;	// 0x346197d1
- (unsigned)hash;	// 0x34619771
- (BOOL)isEqual:(id)equal;	// 0x343fabd1
// converted property getter: - (BOOL)isMerged;	// 0x343f9819
- (BOOL)isMergedPropertyForSelector:(SEL)selector;	// 0x34376359
// converted property getter: - (BOOL)isMergedWithParent;	// 0x343f9835
- (id)overrideForSelector:(SEL)selector;	// 0x343762a9
// converted property getter: - (id)parent;	// 0x343f9809
- (void)removeUnnecessaryOverrides;	// 0x343f9c05
// converted property setter: - (void)setMerged:(BOOL)merged;	// 0x343f9851
// converted property setter: - (void)setMergedWithParent:(BOOL)parent;	// 0x343f986d
// converted property setter: - (void)setParent:(id)parent;	// 0x3437e521
- (void)setParent:(id)parent myRestrictedClass:(Class)aClass;	// 0x343f8ba1
@end
