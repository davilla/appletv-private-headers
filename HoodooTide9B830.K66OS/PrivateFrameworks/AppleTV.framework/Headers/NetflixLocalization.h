/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixLocalization : NSObject {
}
+ (id)fallbackLaungauegFor:(id)aFor;	// 0x32c4a715
+ (void)initialize;	// 0x32c4a1f9
+ (id)localizationTable:(id)table fromBundle:(id)bundle;	// 0x32c4a9ad
+ (id)localizationTableForFilePath:(id)filePath;	// 0x32c4a911
+ (id)localizedStringForKey:(id)key value:(id)value table:(id)table bundle:(id)bundle;	// 0x32c4a611
+ (Class)lookupProviderClassFor:(id)aFor tableName:(id)name;	// 0x32c4abed
+ (id)preferredLanguages;	// 0x32c4a431
+ (id)preferredLocalizationsFromBundle:(id)bundle;	// 0x32c4a441
+ (id)providerForTable:(id)table;	// 0x32c4ac89
+ (id)pseudoLocalizeString:(id)string withValue:(id)value;	// 0x32c4a819
+ (void)setPreferredLanguages:(id)languages;	// 0x32c4a1fd
+ (void)setPseudoLocalization:(BOOL)localization;	// 0x32c4a705
@end

