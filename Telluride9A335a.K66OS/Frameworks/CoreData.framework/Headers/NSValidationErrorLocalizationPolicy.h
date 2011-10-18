/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCopying.h"

@class NSBundle, NSURL, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
@private
	NSURL *_url;	// 4 = 0x4
	NSBundle *_localizationBundle;	// 8 = 0x8
	NSString *_modelStringsFileName;	// 12 = 0xc
	NSDictionary *_localizationDictionary;	// 16 = 0x10
	BOOL _hasSetLocalizationDictionary;	// 20 = 0x14
}
@property(retain) NSDictionary *localizationDictionary;	// G=0x331a32e1; S=0x331a328d; converted property
- (id)initWithURL:(id)url;	// 0x330b50e5
- (id)_cachedObjectForKey:(id)key value:(void *)value;	// 0x331a3319
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x331a33e5
- (void)_ensureLocalizationDictionaryIsInitialized;	// 0x331a3491
- (id)_localizedPropertyNameForProperty:(id)property entity:(id)entity;	// 0x331a3151
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x331a339d
- (id)copyWithZone:(NSZone *)zone;	// 0x331a3615
- (void)dealloc;	// 0x330e5be9
// converted property getter: - (id)localizationDictionary;	// 0x331a32e1
- (id)localizedEntityNameForEntity:(id)entity;	// 0x331a323d
- (id)localizedModelStringForKey:(id)key;	// 0x331a3095
- (id)localizedPropertyNameForProperty:(id)property;	// 0x331a30d1
// converted property setter: - (void)setLocalizationDictionary:(id)dictionary;	// 0x331a328d
@end

