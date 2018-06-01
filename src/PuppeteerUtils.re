open Puppeteer;

let launchHeadlessBrowser = () =>
  launch(
    ~options={
      "ignoreHTTPSErrors": Js.Nullable.null,
      "executablePath": Js.Nullable.null,
      "slowMo": Js.Nullable.null,
      /* "args": Js.Nullable.null, */
      "args": Js.Nullable.return([|"--headless", "--hide-scrollbars", "--mute-audio", "--no-sandbox", "--disable-setuid-sandbox"|]),
      "handleSIGINT": Js.Nullable.null,
      "timeout": Js.Nullable.null,
      "dumpio": Js.Nullable.null,
      "userDataDir": Js.Nullable.null,
      "headless": Js.Nullable.return(Js.false_)
    },
    ()
  );

let closeBrowser = (browser) => browser |> Browser.close;