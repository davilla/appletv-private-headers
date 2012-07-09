/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPersonImageDataDelegate.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
	CFDictionaryRef _currentImageData;	// 4 = 0x4
	void *_personForImageData;	// 8 = 0x8
	BOOL _hasImageChanges;	// 12 = 0xc
	BOOL _didChangePreferredPersonForImage;	// 13 = 0xd
	ABPersonTableViewDataSource *_dataSource;	// 16 = 0x10
}
@property(assign) CFDictionaryRef currentImageData;	// G=0x370d53a5; S=0x370d53f5; converted property
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x370d5d2d; S=0x370d5d3d; @synthesize=_dataSource
@property(readonly, assign) BOOL didChangePreferredPersonForImage;	// G=0x370d5d1d; converted property
@property(readonly, assign) BOOL hasImageChanges;	// G=0x370d5429; converted property
@property(assign) void *personForImageData;	// G=0x370d5271; S=0x370d5285; converted property
// converted property getter: - (CFDictionaryRef)currentImageData;	// 0x370d53a5
// declared property getter: - (id)dataSource;	// 0x370d5d2d
- (void)dealloc;	// 0x370d4725
// converted property getter: - (BOOL)didChangePreferredPersonForImage;	// 0x370d5d1d
// converted property getter: - (BOOL)hasImageChanges;	// 0x370d5429
- (BOOL)hasImageDataForPerson:(void *)person;	// 0x370d4bbd
- (id)imageDataWithFormat:(int)format cropRect:(CGRect *)rect forPerson:(void *)person;	// 0x370d4d5d
- (id)imageDataWithFormat:(int)format cropRect:(CGRect *)rect forPerson:(void *)person isRemoved:(BOOL *)removed;	// 0x370d57e5
- (void)imageWillSave;	// 0x370d52d9
- (void)markImagesWith:(id)with forPerson:(void *)person;	// 0x370d4781
- (id)people;	// 0x370d4a75
// converted property getter: - (void *)personForImageData;	// 0x370d5271
- (void *)personForImageDataExcludingPeople:(id)imageDataExcludingPeople;	// 0x370d5a45
- (void)refreshImageData;	// 0x370d52c9
- (void)reloadImageData;	// 0x370d5325
- (void)removeImageDataForPerson:(void *)person;	// 0x370d5005
- (void)resetImageData;	// 0x370d5439
// converted property setter: - (void)setCurrentImageData:(CFDictionaryRef)data;	// 0x370d53f5
// declared property setter: - (void)setDataSource:(id)source;	// 0x370d5d3d
- (void)setImageData:(id)data withFormat:(int)format cropRect:(CGRect)rect forPerson:(void *)person;	// 0x370d4d81
// converted property setter: - (void)setPersonForImageData:(void *)imageData;	// 0x370d5285
- (void)updateRecordImages;	// 0x370d5489
- (id)writablePeople;	// 0x370d4a9d
@end
