//
//  ReaderSettings.h
//  Pods
//
//  Created by Felipe Lobo on 29/05/13.
//
//

#import <Foundation/Foundation.h>

@interface ReaderSettings : NSObject

@property (nonatomic, assign) BOOL standalone;
@property (nonatomic, assign, getter = hasBookmarking) BOOL bookmarking;
@property (nonatomic, assign, getter = isMailEnabled) BOOL mailEnabled;
@property (nonatomic, assign, getter = isThumbsEnabled) BOOL thumbsEnabled;
@property (nonatomic, assign, getter = isPrintingEnabled) BOOL printingEnabled;
@property (nonatomic, assign, getter = isIdleTimeDisabled) BOOL idleTimeDisabled;
@property (nonatomic, assign, getter = isPreviewEnabled) BOOL previewEnabled;
@property (nonatomic, assign, getter = shouldShowShadows) BOOL showShadows;
@property (nonatomic, assign, getter = isRetinaDisabled) BOOL retinaDisabled;
@property (nonatomic, assign, getter = shouldShowMainToolbar) BOOL showMainToolbar;
@property (nonatomic, assign, getter = shouldShowMainPagebar) BOOL showMainPagebar;

+ (ReaderSettings *)defaultSettings;

@end
