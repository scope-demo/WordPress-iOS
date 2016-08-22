#import <Foundation/Foundation.h>
#import <WordPressComAnalytics/WPAnalytics.h>

@interface WPAnalyticsTrackerAutomatticTracks : NSObject<WPAnalyticsTracker>

+ (NSString *)eventNameForStat:(WPAnalyticsStat)stat;

@end
