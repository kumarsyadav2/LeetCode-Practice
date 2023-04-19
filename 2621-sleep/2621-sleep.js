/**
 * @param {number} millis
 */
async function sleep(millis) {
  let myPromise = new Promise(function (resolve) {
    setTimeout(() => resolve(), millis);
  });
  await myPromise;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */

